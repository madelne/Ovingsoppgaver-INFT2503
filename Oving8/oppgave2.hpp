
template <typename Type1, typename Type2>

class Pair{
  public:
    Type1 first;
    Type2 second;
    Pair(Type1 a, Type2 b){
      first = a;
      second = b;
    }

    Pair operator+(const Pair &pair){
      Pair pair2 = *this;
      pair2.first += pair.first;
      pair2.second += pair.second;
      return pair2;
    }

    bool operator>(const Pair &pair) const{
        return (this->first + this->second) > (pair.first + pair.second);
      }
};
