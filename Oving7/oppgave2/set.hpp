#pragma once
#include <vector>

class Set{
  public:
    std::vector<int> set;

    Set();
    Set(const std::vector<int> &set);
    void initialize(int start, int stop);
    Set findUnion(const Set& otherSet) const;
    Set operator+(const int number);
    Set &operator=(const Set &other);
    void printSet() const;
};
