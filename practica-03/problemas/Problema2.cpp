#include <iostream>

using namespace std;

int contarDigitos(long long n);

int main() {
  long long n;
  cin >> n;
  cout << contarDigitos(n) << endl;
  return 0;
}

int contarDigitos(long long n) {
  if (n < 9) return 1;
  return 1 + contarDigitos(n / 10);
}