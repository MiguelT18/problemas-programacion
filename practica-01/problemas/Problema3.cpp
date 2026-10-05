#include <iostream>
#include <string>

using namespace std;

int contarVocales(string s);

int main() {
  string s;
  cin >> s;

  cout << contarVocales(s) << endl;
  
  return 0;
}

int contarVocales(string s) {
  if (s.empty()) return 0;

  char c = s[0];
  int count = (c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u') ? 1 : 0;

  return count + contarVocales(s.substr(1));
}