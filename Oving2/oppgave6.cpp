//
// Created by madeleine negård on 18/08/2025.
//
#include <iostream>
using namespace std;

int find_sum(const int *table, int length);

int main() {
    int table[20];
    for (int i = 0; i < 20; i++) {
        table[i] = i+1;
    }
    cout << "Sum av de 10 første tallene: " << find_sum(table, 10) << endl;
    cout << "Sum av de 5 neste tallene: " << find_sum(&table[10], 5) << endl;
    cout << "Sum av de 5 siste tallene: " << find_sum(&table[15], 5) << endl;
    return 0;
}

int find_sum(const int *table, int length) {
    int sum = 0;
    for (int i = 0; i < length; i++) {
        sum += *(table + i);
    }
    return sum;
}