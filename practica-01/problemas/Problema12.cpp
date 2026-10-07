#include <iostream>
#include <vector>

using namespace std;

vector<string> permutaciones(string s);

int main() {
  string s;
  cin >> s;
  vector<string> resultado = permutaciones(s);
  for (const string& p : resultado)
    cout << p << '\n';
  return 0;
}

vector<string> permutaciones(string s) {
  vector<string> resultado;

  if(s.empty()) {
    resultado.push_back("");
    return resultado;
  }
  if (s.size() == 1) {
    resultado.push_back(s);
    return resultado;
  }

  for (size_t i = 0; i < s.size(); ++i) {
    char c = s[i];
    string resto = s.substr(0, i) + s.substr(i + 1);
    vector<string> sub_permutaciones = permutaciones(resto);
    for (const string& p : sub_permutaciones)
      resultado.push_back(c + p);
  }
  return resultado;
};