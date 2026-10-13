#include <iostream>

using namespace std;

long long factorial(int n);

int main() {
  int n;
  cin >> n;
  cout << factorial(n) << endl;
  return 0;
}

long long factorial(int n) {
  if (n == 0) return 1;
  else return n * factorial(n - 1);
}