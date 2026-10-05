#include <iostream>
#include <vector>

using namespace std;

void burbujaContando(vector<int>& vec, long long& comparaciones, long long& movimientos);
void seleccionContando(vector<int>& vec, long long& comparaciones, long long& movimientos);
void insercionContando(vector<int>& vec, long long& comparaciones, long long& movimientos);
void compararMetodos(vector<int> vec);

int main() {
  int n;
  cin >> n;

  vector<int> vec(n);
  for (int i = 0; i < n; i++) {
    cin >> vec[i];
  }

  compararMetodos(vec);

  return 0;
}

void compararMetodos(vector<int> vec) {
  vector<int> a = vec;
  vector<int> b = vec;
  vector<int> c = vec;
  long long comparaciones;
  long long movimientos;

  burbujaContando(a, comparaciones, movimientos);
  cout << "Burbuja: comparaciones " << comparaciones
       << ", movimientos " << movimientos << endl;

  seleccionContando(b, comparaciones, movimientos);
  cout << "Seleccion: comparaciones " << comparaciones
       << ", movimientos " << movimientos << endl;

  insercionContando(c, comparaciones, movimientos);
  cout << "Insercion: comparaciones " << comparaciones
       << ", movimientos " << movimientos << endl;
}

void burbujaContando(vector<int>& vec, long long& comparaciones, long long& movimientos) {
  int n = (int)vec.size();
  comparaciones = 0;
  movimientos = 0;
  int pasada = 0;
  bool cambio = true;

  while (cambio && pasada < n - 1) {
    cambio = false;
    for (int j = 0; j < n - 1 - pasada; j++) {
      comparaciones++;
      if (vec[j] > vec[j + 1]) {
        int aux = vec[j];
        vec[j] = vec[j + 1];
        vec[j + 1] = aux;
        movimientos++;
        cambio = true;
      }
    }
    pasada++;
  }
}

void seleccionContando(vector<int>& vec, long long& comparaciones, long long& movimientos) {
  int n = (int)vec.size();
  comparaciones = 0;
  movimientos = 0;

  for (int i = 0; i < n - 1; i++) {
    int menor = i;
    for (int j = i + 1; j < n; j++) {
      comparaciones++;
      if (vec[j] < vec[menor]) menor = j;
    }

    if (menor != i) {
      int aux = vec[i];
      vec[i] = vec[menor];
      vec[menor] = aux;
      movimientos++;
    }
  }
}

void insercionContando(vector<int>& vec, long long& comparaciones, long long& movimientos) {
  int n = (int)vec.size();
  comparaciones = 0;
  movimientos = 0;

  for (int i = 1; i < n; i++) {
    int clave = vec[i];
    int j = i - 1;

    while (j >= 0 && vec[j] > clave) {
      comparaciones++;
      vec[j + 1] = vec[j];
      movimientos++;
      j--;
    }

    if (j >= 0) comparaciones++;
    vec[j + 1] = clave;
  }
}
