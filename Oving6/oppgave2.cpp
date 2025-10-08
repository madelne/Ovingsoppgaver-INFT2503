#include <boost/asio.hpp>
#include <iostream>

using namespace std;
using namespace boost::asio::ip;

class EchoServer {
private:
  class Connection {
  public:
    tcp::socket socket;
    Connection(boost::asio::io_context &io_context) : socket(io_context) {}
  };

  boost::asio::io_context io_context;

  tcp::endpoint endpoint;
  tcp::acceptor acceptor;

  void handle_request(shared_ptr<Connection> connection) {
    auto read_buffer = make_shared<boost::asio::streambuf>();
    // Read from client until newline ("\r\n")
    async_read_until(connection->socket, *read_buffer, "\r\n\r\n", [this, connection, read_buffer](const boost::system::error_code &ec, size_t) {
      // If not error:
      if (!ec) {
        // Retrieve message from client as string:
        istream read_stream(read_buffer.get());
        string method, path, version;
        read_stream >> method >> path >> version;
        cout << "Request: " << method << " " << path << " " << version << endl;

        auto write_buffer = make_shared<boost::asio::streambuf>();
        ostream write_stream(write_buffer.get());

        // Add message to be written to client:
        if (method == "GET" && version.substr(0, 5) == "HTTP/") {
                                      if (path == "/") {
                                          write_stream << "HTTP/1.1 200 OK\r\nContent-Type: text/plain\r\n\r\nDette er hovedsiden\r\n";
                                      } else if (path == "/en_side") {
                                          write_stream << "HTTP/1.1 200 OK\r\nContent-Type: text/plain\r\n\r\nDette er en side\r\n";
                                      } else {
                                          write_stream << "HTTP/1.1 404 Not Found\r\nContent-Type: text/plain\r\n\r\n404 Not Found\r\n";
                                      }
                                  } else {
                                      write_stream << "HTTP/1.1 400 Bad Request\r\nContent-Type: text/plain\r\n\r\n400 Bad Request\r\n";
                                  }

        // Write to client
        async_write(connection->socket, *write_buffer,
          [connection, write_buffer](const boost::system::error_code &ec, size_t) {
            boost::system::error_code shutdown_ec;
            connection->socket.shutdown(tcp::socket::shutdown_both, shutdown_ec);
            connection->socket.close(shutdown_ec);
          });
      }
    });
  }

  void accept() {
    // The (client) connection is added to the lambda parameter and handle_request
    // in order to keep the object alive for as long as it is needed.
    auto connection = make_shared<Connection>(io_context);

    // Accepts a new (client) connection. On connection, immediately start accepting a new connection
    acceptor.async_accept(connection->socket, [this, connection](const boost::system::error_code &ec) {
      accept();
      // If not error:
      if (!ec) {
        handle_request(connection);
      }
    });
  }

public:
  EchoServer() : endpoint(tcp::v4(), 8080), acceptor(io_context, endpoint) {}

  void start() {
    accept();

    io_context.run();
  }
};

int main() {
  EchoServer echo_server;

  cout << "Starting echo server" << endl
       << "Connect in a terminal with: telnet localhost 8080." << endl;

  echo_server.start();
}
