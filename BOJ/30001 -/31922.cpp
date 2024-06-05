#include <iostream>
using namespace std;

int main(void) {
  int a, b, c;
  cin >> a >> b >> c;
  if (a + c >= b)
    cout << a + c << "\n";
  else
    cout << b << "\n";
  return 0;
}