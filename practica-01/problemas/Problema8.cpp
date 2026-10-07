#include <iostream>

using namespace std;

long long potencia(int a, int b);

int main() {
  int a, b;
  cin >> a >> b;

  cout << potencia(a, b) << endl;
  
  return 0;
}

long long potencia(int a, int b) {
  long long resultado = 1;

  if (b == 0) return 1;
  return a * potencia(a, b - 1);
}