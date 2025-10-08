//
// Created by madeleine negård on 11/08/2025.
//

int main() {
    int a = 5;

    //int &b; er feil fordi &b må settes til en variabel
    int &b = a;

    int *c;
    c = &b;

    // *a = *b + *c; er feil fordi a og b er vanlige variabeler og ikke pointere. Derfor finnes ikke *a eller *b.
    a = b + *c;

    //&b = 2; vi vil endre verdien til b, ikke adressen.
    b = 2;

}
