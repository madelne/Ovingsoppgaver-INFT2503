#pragma once
#include <vector>

class Set{
  public:
    std::vector<int> set;

    Set();

    Set findUnion(const Set& otherSet) const;
    Set operator+(int number) const;
    Set &operator=(const Set &other);
    void printSet();
};
