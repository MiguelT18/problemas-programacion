#include <iostream>
#include <vector>

using namespace std;

int buscarBinaria(vector<int> vec, int x);

int main() {
  int n;
  cin >> n;

  vector<int> vec(n);
  for (int i = 0; i < n; i++) {
    cin >> vec[i];
  }

  int x;
  cin >> x;

  cout << buscarBinaria(vec, x) << endl;

  return 0;
}

int buscarBinaria(vector<int> vec, int x) {
  int ini = 0;
  int fin = (int)vec.size() - 1;

  while (ini <= fin) {
    int medio = ini + (fin - ini) / 2;

    if (vec[medio] == x) return medio;
    if (vec[medio] < x) ini = medio + 1;
    else fin = medio - 1;
  }

  return -1;
}
