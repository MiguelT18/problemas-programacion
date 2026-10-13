  #include <iostream>

  using namespace std;

  int llamadasRecursivaFibonacci(int n);

  int main() {
    int n;
    cin >> n;

    cout << llamadasRecursivaFibonacci(n) << endl;
    
    return 0;
  }

  int llamadasRecursivaFibonacci(int n) {
    if (n <= 2) return 1;
    return 1 + llamadasRecursivaFibonacci(n - 1) + llamadasRecursivaFibonacci(n - 2);
  }