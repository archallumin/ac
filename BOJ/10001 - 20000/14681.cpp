#include <iostream>
using namespace std;

int main(void) {
  int a, b;
  cin >> a;
  cin >> b;
  if (a > 0 && b > 0)
    cout << "1\n";
  else if (a < 0 && b > 0)
    cout << "2\n";
  else if (a < 0 && b < 0)
    cout << "3\n";
  else if (a > 0 && b < 0)
    cout << "4\n";
  return 0;
}