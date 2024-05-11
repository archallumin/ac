#include <iostream>
using namespace std;

int main(void) {
  cin.tie(NULL);
  cout.tie(NULL);
  ios::sync_with_stdio(false);
  unsigned long long int a, b;
  cin >> a >> b;
  cout << a / b << ".";
  a = a % b;
  for (int i = 1; i <= 1000; i++) {
    a = a * 10;
    cout << a / b;
    a -= (a / b) * b;
  }
  cout << "\n";
  return 0;
}