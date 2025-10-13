#include "set.hpp"
#include "iostream"

using namespace std;

int main() {
  Set set, set1;
  set.initialize(1, 10);
  set1.initialize(3, 12);
  std::cout << "Første set: " << endl;
  set.printSet();

  Set set2 = set.findUnion(set1);
  std::cout << "Union med 3-12: " << endl;
  set2.printSet();

  set + 18;
  std::cout << "Set + 18: " << endl;
  set.printSet();

  set = set1;
  std::cout << "Set lik set1: " << endl;
  set.printSet();
}
