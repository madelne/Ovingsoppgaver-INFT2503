//
// Created by madeleine negård on 18/08/2025.
//
#include <iostream>
using namespace std;

int main() {
    double number = 50;
    double *p = &number;
    double &r = number;

    number = 1;
    cout << number << endl;
    *p = 2;
    cout << number << endl;
    r = 3;
    cout << number << endl;
}