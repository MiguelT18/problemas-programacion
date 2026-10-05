#include <iostream>
#include <string>

using namespace std;

bool esPalindromo(string s);

int main() {
  string palabra;
  cin >> palabra;

  cout << (esPalindromo(palabra) ? "Es palindromo" : "No es palindromo") << endl;
  
  return 0;
}

bool esPalindromo(string s) {
  if (s.size() <= 1) return true;
  if (s[0] != s[s.size() - 1]) return false;
  return esPalindromo(s.substr(1, s.size() - 2));
}