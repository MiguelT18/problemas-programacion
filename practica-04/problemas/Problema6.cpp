#include <iostream>
#include <vector>

using namespace std;

void imprimirArreglo(vector<int> vec);

int main() {
  int n;
  cin >> n;
  vector<int> vec(n);
  for (int i = 0; i < n; i++) 
    cin >> vec[i];
  imprimirArreglo(vec);
  return 0;
}

void imprimirArreglo(vector<int> vec) {
  if (vec.size() >= 0)
    cout << vec[0] << endl;
  else if (vec.empty())
    cout << "" << endl;
}