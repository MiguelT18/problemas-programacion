#include <iostream>
#include <vector>

using namespace std;

bool estaOrdenado(vector<int> vec);

int main() {
  int n;
  cin >> n;

  vector<int> vec(n);
  for (int i = 0; i < n; i++) {
    int m;
    cin >> m;
    vec[i] = m;
  }

  if (estaOrdenado(vec))
    cout << "Ordenado" << endl;
  else
    cout << "Desordenado" << endl;

  return 0;
}

bool estaOrdenado(vector<int> vec) {
  if (vec.size() <= 1) return true;
  if (vec[0] > vec[1]) return false;

  return estaOrdenado(vector<int>(vec.begin() + 1, vec.end()));
}
