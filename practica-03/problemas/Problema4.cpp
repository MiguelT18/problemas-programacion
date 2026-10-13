#include <iostream>
#include <string>

using namespace std;

string aBinario(int n);

int main() {
  int n;
  cin >> n;
  cout << aBinario(n) << endl;
  return 0;
}

string aBinario(int n){
  if (n == 0) return "0";
  if (n == 1) return "1";
  return aBinario(n / 2) + to_string(n % 2);
}