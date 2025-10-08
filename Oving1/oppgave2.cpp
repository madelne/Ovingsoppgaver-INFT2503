//
// Created by madeleine negård on 10/08/2025.
//
#include <iostream>
#include <fstream>

using namespace std;

void read_temperatures(double temperatures[], int length);

int main() {
    const int length = 5;
    double temperatures[length];
    int group1 = 0;
    int group2 = 0;
    int group3 = 0;

    read_temperatures(temperatures, length);

    for (int i = 0; i < length; ++i) {
        const int temp = temperatures[i];
        if (temp < 10) {
            group1++;
        } else if (temp <= 20 && temp >= 10) {
            group2++;
        } else if (temp > 20) {
            group3++;
        }
    }

    cout << "Antall temperaturer under 10 grader: " << group1 << "\n";
    cout << "Antall temperaturer mellom 10 og 20 grader: " << group2 << "\n";
    cout << "Antall temperaturer over 20 grader: " << group3 << "\n";
    return 0;
}

void read_temperatures(double temperatures[], int length) {
    const char filename[] = "../temperaturer";
    ifstream file;
    file.open(filename);

    if (!file) {
        cout << "Feil ved åpning av innfil." << endl;
        exit(EXIT_FAILURE);
    }

    int temperature;
    int i = 0;
    while (file >> temperature && i < length) {
        temperatures[i] = temperature;
        i++;
    }
    file.close();
}