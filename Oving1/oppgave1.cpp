//
// Created by madeleine negård on 09/08/2025.
//
#include <iostream>
using namespace std;

int main() {
  const int length = 5;
  int group1 = 0;
  int group2 = 0;
  int group3 = 0;
  int temp;

  cout << "Skriv inn " << length << " temperaturer under \n";

  for (int i = 0; i < length; ++i) {
   cout << "Temperatur " << i + 1 << ": ";
   cin >> temp;
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