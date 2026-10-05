#include <iostream>
#include <vector>

using namespace std;

int particion(vector<int>& vec, int ini, int fin);
void ordenarRango(vector<int>& vec, int ini, int fin);
void ordenarRapida(vector<int>& vec);

int main() {
  int n;
  cin >> n;

  vector<int> vec(n);
  for (int i = 0; i < n; i++) {
    cin >> vec[i];
  }

  ordenarRapida(vec);

  for (int i = 0; i < n; i++) {
    cout << vec[i];
    if (i < n - 1) cout << " ";
  }
  cout << endl;

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

void ordenarRapida(vector<int>& vec) {
  ordenarRango(vec, 0, (int)vec.size() - 1);
}

void ordenarRango(vector<int>& vec, int ini, int fin) {
  if (ini >= fin) return;

  int pos = particion(vec, ini, fin);
  ordenarRango(vec, ini, pos - 1);
  ordenarRango(vec, pos + 1, fin);
}
