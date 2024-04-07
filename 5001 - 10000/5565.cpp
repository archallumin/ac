#include <iostream>
using namespace std;

int main(void) {
  int a, b, total = 0, i = 9;
  cin >> a;
  while (i--) {
    cin >> b;
    total = total + b;
  }
  cout << a - total << "\n";
  return 0;
}