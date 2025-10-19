#include <cmath>
#include <iomanip>
#include <iostream>

using namespace std;
template <typename Type>

bool equal(Type a, Type b) {
    cout << "Using Type" << endl;
    return a == b;
}

bool equal(double a, double b) {
    cout << setprecision(6) << "Using decimal with a: "<< a << "and b: " << b << endl;
    return abs(a - b) < 0.00001;
}

int main() {
    cout << "Test with 5 and 8: " << endl << equal(5, 8) << endl;
    cout << "Test with 10 and 10: " << endl << equal(10, 10) << endl;
    cout << "Test with 2.021934920 and 10.334444553: " << endl << equal(2.021934920, 10.334444553) << endl;
    cout << "Test with 2.021934920 and 2.02193: " << endl << equal(2.021934920, 2.02193) << endl;
    return 0;
}