#include <iostream>
#include <vector>

using namespace std;

int ordenarSeleccion(vector<int>& vec);

int main() {
  int n;
  cin >> n;

  vector<int> vec(n);
  for (int i = 0; i < n; i++) {
    cin >> vec[i];
  }

  int intercambios = ordenarSeleccion(vec);

  for (int i = 0; i < n; i++) {
    cout << vec[i];
    if (i < n - 1) cout << " ";
  }
  cout << endl;
  cout << intercambios << endl;

  return 0;
}

int ordenarSeleccion(vector<int>& vec) {
  int n = (int)vec.size();
  int intercambios = 0;

  for (int i = 0; i < n - 1; i++) {
    int menor = i;
    for (int j = i + 1; j < n; j++) {
      if (vec[j] < vec[menor]) menor = j;
    }

    if (menor != i) {
      int aux = vec[i];
      vec[i] = vec[menor];
      vec[menor] = aux;
      intercambios++;
    }
  }

  return intercambios;
}
