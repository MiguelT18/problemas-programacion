#include <iostream>
#include <string>

using namespace std;

string invertirPalabras(string s);

int main() {
  string s;
  getline(cin, s);

  cout << invertirPalabras(s) << endl;
  
  return 0;
}

string invertirPalabras(string s) {
  size_t pos = s.find(' ');
  if (pos == string::npos) return s;
  return invertirPalabras(s.substr(pos + 1)) + " " + s.substr(0, pos);
}