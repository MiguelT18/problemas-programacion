#include <iostream>

using namespace std;

bool esMultiplo(int n);

int main() {
  int n;
  cin >> n;
  
  if(esMultiplo(n)) cout << 1 << endl;
  else cout << 0 << endl;
  
  return 0;
}

bool esMultiplo(int n) {
  if (n < 0) n = -n;
  if (n < 10) return (n == 0 || n == 7);

  int q = n / 10, d = n - 10 * q;
  return esMultiplo(q - 2 * d);
}