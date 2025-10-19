#include "set.hpp"
#include <random>
#include <iostream>
#include <algorithm>

using namespace std;

void Set::initialize(const int start, const int stop) {
    for (int i = start; i <= stop; ++i) {
        set.push_back(i);
    }
}

Set::Set() {}

Set::Set(const std::vector<int> &set) : set(set) {}

Set Set::findUnion(const Set& otherSet) const{
    std::vector<int> newVec = set;
    for (int number : otherSet.set) {
        if (std::find(newVec.begin(), newVec.end(), number) == newVec.end()) {
            newVec.push_back(number);
        }
    }
    return Set(newVec);
}

Set Set::operator+(const int number){
  if(std::find(set.begin(), set.end(), number) == set.end()){
    set.push_back(number);
  }
  return set;
}

Set &Set::operator=(const Set &other){
  if(this == &other){
    return *this;
  }
  set = other.set;
  return *this;
}

void Set::printSet() const {
  for(const int number : set){
    std::cout << number << " ";
  }
    std::cout << endl;
}

