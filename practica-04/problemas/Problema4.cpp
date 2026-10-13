#include <iostream>
using namespace std;

int invertirNumeroR(int n, int& factor);
int invertirNumeroR(int n);

int main() {
  int n;
  cin >> n;
  cout << invertirNumeroR(n) << endl;
}

int invertirNumeroR(int n) {
  int factor = -1;
  return invertirNumeroR(n, factor);
}

int invertirNumeroR(int n, int& factor) {
  if (n == 0) {
    factor = 1;
    return n;
  } else {
    int ultimoDigito = n % 10;
    int nn = invertirNumeroR(n / 10, factor);
    int resultado = factor * ultimoDigito + nn;
    factor = 10 * factor;
    return resultado;
  }
}