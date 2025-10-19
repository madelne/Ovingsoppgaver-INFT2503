#include "fraction.hpp"
#include <iostream>
#include <string>

using namespace std;

void print(const string &text, const Fraction &broek) {
    cout << text << broek.numerator << " / " << broek.denominator << endl;
}

int main() {
    Fraction a(10, 20);
    Fraction b(3, 4);
    Fraction c;
    c.set(5);
    Fraction d = a / b;

    print("a = ", a);
    print("b = ", b);
    print("c = ", c);
    print("d = ", d);

    b += a;
    ++c;
    d *= d;

    print("b = ", b);
    print("c = ", c);
    print("d = ", d);

    c = a + b - d * a;
    c = -c;

    print("c = ", c);

    if (a + b != c + d)
        cout << "a + b != c + d" << endl;
    else
        cout << " a + b == c + d" << endl;
    while (b > a)
        b -= a;
    print("b = ", b);

    b = b - 5;
    print("b - 5 = ", b);

    b = 3 - b;
    print("10 - b = ", b);

    Fraction fraction1(10, 20);
    Fraction fraction2(3, 4);

    print("5 - 3 - fraction1 - 7 - fraction2 = ", 5 - 3 - fraction1 - 7 - fraction2);

    /* Oppgave b
     * Først blir vanlig - operasjon brukt for 5-3, som blir 2.
     * Videre brukes operator-(int number, const Fraction &other) fra oppgave a til 2-fraction1.
     * I neste steg brukes operator-(int number) fra oppgave a til (2 - fraction1) - 7.
     * Til slutt brukes funksjonen operator-() til å regne ut ((2 - fraction1) - 7) - fraction 2.
     */
}
