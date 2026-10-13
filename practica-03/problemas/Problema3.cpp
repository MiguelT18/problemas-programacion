#include <iostream>

using namespace std;

void imprimirDescendente(int n);

int main() {
  int n;
  cin >> n;
  imprimirDescendente(n);
  cout << endl;
  return 0;
}

void imprimirDescendente(int n) {
  if (n < 1) return;
  cout << n << ' ';
  imprimirDescendente(n - 1);
}