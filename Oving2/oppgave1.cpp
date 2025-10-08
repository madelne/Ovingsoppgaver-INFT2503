//
// Created by madeleine negård on 11/08/2025.
//
#include <iostream>
using namespace std;

int main() {
    int i = 3;
    int j = 5;
    int *p = &i;
    int *q = &j;

    cout << "Variabel i: " << i << endl;
    cout << "Adresse i: " << &i << endl;
    cout << endl;

    cout << "Variabel j: " << j << endl;
    cout << "Adresse j: " << &j << endl;
    cout << endl;

    cout << "Variabel p: " << p << endl;
    cout << "p peker på: " << *p << endl;
    cout << "Adresse p: " << &p << endl;
    cout << endl;

    cout << "Variabel q: " << q << endl;
    cout << "q peker på: " << *q << endl;
    cout << "Adresse q: " << &q << endl;


    *p = 7;
    cout << *p << endl;
    *q += 4;
    cout << *q << endl;
    *q = *p + 1;
    cout << *q << endl;
    p = q;
    cout << *p << " " << *q << endl;
    return 0;
}

/* Oppgave 2
 *
 * line peker på nullptr, altså adressen 0. Det vil si at når vi bruker strcpy prøver vi å skrive
 * til en beskyttet adresse vi ikke har tilgang til. Dette vil derfor føre til en feilmelding.
 */

/* Oppgave 3
 *
 * Det første problemet med koden er at det ikke er noen grense på inputen. Tabellen text har en satt
 * lengde på 5. En større input vil føre til buffer overflow.
 *
 * Det andre problemet er at while-løkken vil fortsette uendelig utover tabellstørrelsen.
 */