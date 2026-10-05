#include <iostream>
#include <vector>

using namespace std;

long long ordenarBurbuja(vector<int>& vec);

int main() {
  int n;
  cin >> n;

  vector<int> vec(n);
  for (int i = 0; i < n; i++) {
    cin >> vec[i];
  }

  long long comparaciones = ordenarBurbuja(vec);

  for (int i = 0; i < n; i++) {
    cout << vec[i];
    if (i < n - 1) cout << " ";
  }
  cout << endl;
  cout << comparaciones << endl;

  return 0;
}

long long ordenarBurbuja(vector<int>& vec) {
  int n = (int)vec.size();
  long long comparaciones = 0;
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
        cambio = true;
      }
    }
    pasada++;
  }

  return comparaciones;
}
