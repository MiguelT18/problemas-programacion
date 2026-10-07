#include <iostream>
#include <vector>

using namespace std;

bool busquedaBinaria(vector<int> vec, int x);
bool busquedaBinaria(vector<int> vec, int x, int inicio, int fin);

int main() {
  int n, x;
  cin >> n;
  vector<int> vec(n);
  for (int i = 0; i < n; i++) {
    cin >> vec[i];
  }
  cin >> x;
  if(busquedaBinaria(vec, x)) {
    cout << "Encontrado" << endl;
  } else {
    cout << "No encontrado" << endl;
  }

  return 0;
}

bool busquedaBinaria(vector<int> vec, int x) {
  return busquedaBinaria(vec, x, 0, vec.size() - 1);
}

bool busquedaBinaria(vector<int> vec, int x, int inicio, int fin) {
  int medio = (inicio + fin) / 2;
  if(inicio > fin) return false;
  if(vec[medio] == x) return true;
  else if(vec[medio] < x) return busquedaBinaria(vec, x, medio + 1, fin);
  else return busquedaBinaria(vec, x, inicio, medio - 1);
}