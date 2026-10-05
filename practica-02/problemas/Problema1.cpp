#include <iostream>
#include <vector>

using namespace std;

bool esOrdenado(vector<int> vec);

int main() {
  int n;
  cin >> n;

  vector<int> vec(n);
  for (int i = 0; i < n; i++) {
    cin >> vec[i];
  }

  if (esOrdenado(vec))
    cout << "Ordenado" << endl;
  else
    cout << "Desordenado" << endl;

  return 0;
}

bool esOrdenado(vector<int> vec) {
  int n = (int)vec.size();

  for (int i = 0; i < n - 1; i++) {
    if (vec[i] > vec[i + 1]) return false;
  }

  return true;
}
