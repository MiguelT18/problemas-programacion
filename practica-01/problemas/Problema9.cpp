#include <iostream>
#include <vector>

using namespace std;

char caracterMasFrecuente(vector<char> &vec);
int contar(vector<char> &vec, char c, int n);

int main() {
  int n;
  cin >> n;
  vector<char> vec(n);
  for (int i = 0; i < n; i++) {
    cin >> vec[i];
  }

  cout << caracterMasFrecuente(vec) << endl;
    
  return 0;
}

char caracterMasFrecuente(vector<char> &vec) {
  if(vec.size() == 1) return vec[0];

  char ultimo = vec.back();
  vec.pop_back();

  char masFrecuente = caracterMasFrecuente(vec);

  if (ultimo == masFrecuente) return masFrecuente;

  int freqMasFrecuente = contar(vec, masFrecuente, vec.size());
  int freqUltimo = contar(vec, ultimo, vec.size()) + 1;

  if (freqUltimo >= freqMasFrecuente) return ultimo;
  
  return masFrecuente;
}

int contar(vector<char> &vec, char c, int n) {
  if (n == 0) return 0;
  int coincide = (vec[n - 1] == c) ? 1 : 0;
  return coincide + contar(vec, c, n - 1);
}