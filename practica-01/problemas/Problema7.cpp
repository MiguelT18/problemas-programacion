#include <iostream>

using namespace std;

int mcd(int a, int b);

int main() {
  int a, b;
  cin >> a >> b;
  cout << mcd(a, b) << endl;
  
  return 0;
}

int mcd(int a, int b) {
  if (b == 0) return a;
  return mcd(b, a % b);
}