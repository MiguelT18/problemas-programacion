#include <iostream>
#include <vector>

using namespace std;

void fusionar(vector<int>& vec, int ini, int medio, int fin);
void ordenarRango(vector<int>& vec, int ini, int fin);
void ordenarFusion(vector<int>& vec);

int main() {
  int n;
  cin >> n;

  vector<int> vec(n);
  for (int i = 0; i < n; i++) {
    cin >> vec[i];
  }

  ordenarFusion(vec);

  for (int i = 0; i < n; i++) {
    cout << vec[i];
    if (i < n - 1) cout << " ";
  }
  cout << endl;

  return 0;
}

void ordenarFusion(vector<int>& vec) {
  ordenarRango(vec, 0, (int)vec.size() - 1);
}

void ordenarRango(vector<int>& vec, int ini, int fin) {
  if (ini >= fin) return;

  int medio = ini + (fin - ini) / 2;
  ordenarRango(vec, ini, medio);
  ordenarRango(vec, medio + 1, fin);
  fusionar(vec, ini, medio, fin);
}

void fusionar(vector<int>& vec, int ini, int medio, int fin) {
  vector<int> izquierda(vec.begin() + ini, vec.begin() + medio + 1);
  vector<int> derecha(vec.begin() + medio + 1, vec.begin() + fin + 1);

  int i = 0;
  int j = 0;
  int k = ini;

  while (i < (int)izquierda.size() && j < (int)derecha.size()) {
    if (izquierda[i] <= derecha[j]) {
      vec[k] = izquierda[i];
      i++;
    } else {
      vec[k] = derecha[j];
      j++;
    }
    k++;
  }

  while (i < (int)izquierda.size()) {
    vec[k] = izquierda[i];
    i++;
    k++;
  }

  while (j < (int)derecha.size()) {
    vec[k] = derecha[j];
    j++;
    k++;
  }
}
