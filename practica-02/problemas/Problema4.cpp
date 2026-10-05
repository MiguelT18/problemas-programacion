#include <iostream>
#include <vector>

using namespace std;

int ordenarInsercion(vector<int>& vec);

int main() {
  int n;
  cin >> n;

  vector<int> vec(n);
  for (int i = 0; i < n; i++) {
    cin >> vec[i];
  }

  int desplazamientos = ordenarInsercion(vec);

  for (int i = 0; i < n; i++) {
    cout << vec[i];
    if (i < n - 1) cout << " ";
  }
  cout << endl;
  cout << desplazamientos << endl;

  return 0;
}

int ordenarInsercion(vector<int>& vec) {
  int n = (int)vec.size();
  int desplazamientos = 0;

  for (int i = 1; i < n; i++) {
    int clave = vec[i];
    int j = i - 1;

    while (j >= 0 && vec[j] > clave) {
      vec[j + 1] = vec[j];
      desplazamientos++;
      j--;
    }

    vec[j + 1] = clave;
  }

  return desplazamientos;
}
