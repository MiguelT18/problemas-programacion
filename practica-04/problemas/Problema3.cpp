#include <iostream>

using namespace std;

int sumaMultiplosDeN(int a, int b, int n);

int main() {
  int a, b, n;
  cin >> a >> b >> n;

  cout << sumaMultiplosDeN(a, b, n) << endl;
  
  return 0;
}

int sumaMultiplosDeN(int a, int b, int n) {
  if (a > b) return 0;
  if (a % n == 0) return a + sumaMultiplosDeN(a + 1, b, n);
  return sumaMultiplosDeN(a + 1, b, n);
}