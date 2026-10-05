#include <iostream>
#include <vector>

using namespace std;

int buscarLineal(vector<int> vec, int x);

int main() {
  int n;
  cin >> n;

  vector<int> vec(n);
  for (int i = 0; i < n; i++) {
    cin >> vec[i];
  }

  int x;
  cin >> x;

  cout << buscarLineal(vec, x) << endl;

  return 0;
}

int buscarLineal(vector<int> vec, int x) {
  int n = (int)vec.size();

  for (int i = 0; i < n; i++) {
    if (vec[i] == x) return i;
  }

  return -1;
}
