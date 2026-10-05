#include <iostream>
#include <vector>

using namespace std;

int particion(vector<int>& vec, int ini, int fin);

int main() {
  int n;
  cin >> n;

  vector<int> vec(n);
  for (int i = 0; i < n; i++) {
    cin >> vec[i];
  }

  int posicion = particion(vec, 0, n - 1);

  for (int i = 0; i < n; i++) {
    cout << vec[i];
    if (i < n - 1) cout << " ";
  }
  cout << endl;
  cout << posicion << endl;

  return 0;
}

int particion(vector<int>& vec, int ini, int fin) {
  int pivote = vec[fin];
  int i = ini - 1;

  for (int j = ini; j < fin; j++) {
    if (vec[j] <= pivote) {
      i++;
      int aux = vec[i];
      vec[i] = vec[j];
      vec[j] = aux;
    }
  }

  int aux = vec[i + 1];
  vec[i + 1] = vec[fin];
  vec[fin] = aux;

  return i + 1;
}
