#include <iostream>

using namespace std;

long long sumaPares(int a, int b);

int main() {
  int a, b;
  cin >> a >> b;

  cout << sumaPares(a, b) << endl;
  
  return 0;
}

long long sumaPares(int a, int b) {
  if (a > b) return sumaPares(b, a);

  if (a == b) {
    return (a % 2 == 0) ? a : 0;
  }

  if (a % 2 == 0) return sumaPares(a + 2, b) + a;
  else return sumaPares(a + 1, b);
}