#include <iostream>
#include <string>

using namespace std;

int main() {
  string word1;
  string word2;
  string word3;

  cout << "Første ord: ";
  cin >> word1;

  cout << "Andre ord: ";
  cin >> word2;

  cout << "Tredje ord: ";
  cin >> word3;

  string sentence = word1 + " " + word2 + " " + word3 + ".";
  cout << "b) sentence: " << sentence << endl;

  cout << "c) Lengde på første ord: " << word1.length() << endl;
  cout << "Lengde på andre ord: " << word2.length() << endl;
  cout << "Lengde på tredje ord: " << word3.length() << endl;
  cout << "Lengde på setning: " << sentence.length() << endl;

  string sentence2 = sentence;

  if (sentence2.length() >= 10) {
    sentence2[10] = 'x';
    if (sentence2.length() >= 11) {
      sentence2[11] = 'x';
      if (sentence2.length() >= 12) {
        sentence2[12] = 'x';
      }
    }
    cout << "e) Ny setning: " << sentence2 << endl;
  } else {
    cout << "Setningen er for kort" << endl;
  }

  if (sentence.length() >= 5) {
    string sentence_start = "";
    for (int i = 0; i < 5; ++i) {
      sentence_start += sentence[i];
    }
    cout << "f) setning: " << sentence << endl;
    cout << " setning-start: " << sentence_start << endl;
  }

  size_t found_hello = sentence.find("hallo");
  if (found_hello!=string::npos) {
    cout << "g) setning inneholder hallo" << endl;
  } else {
    cout << "g) setning inneholder ikke hallo" << endl;
  }

  size_t found_er = sentence.find("er");
  int sum = 0;
  while (found_er != string::npos){
    sum++;
    found_er = sentence.find("er", found_er+1);
  }

  cout << "h) 'er' forekommer " << sum << " ganger.";
}

