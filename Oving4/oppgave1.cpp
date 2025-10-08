#include <vector>
#include <iostream>

using namespace std;

int main() {
    vector<double> numbers = {1,2,3,4,5};

    cout << "Front: " << numbers.front() << endl;
    cout << "Back: " << numbers.back() << endl;

    numbers.emplace(numbers.begin() + 1, 9.0);
    cout << "Front after emplace: " << numbers.front() << endl;

    auto found = find(numbers.begin(), numbers.end(), 3);
    if (found != numbers.end()) {
        cout << "Value found at place ";
        cout << distance(numbers.begin(), found);
    }
}
