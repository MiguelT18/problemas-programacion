#include <iostream>

using namespace std;

int sumaDigitos(int n);

int main() {
  int n;
  cin >> n;

  cout << sumaDigitos(n) << endl;
  
  return 0;
}

int sumaDigitos(int n) {
  if (n == 0) return 0;

  return n % 10 + sumaDigitos(n / 10);
}