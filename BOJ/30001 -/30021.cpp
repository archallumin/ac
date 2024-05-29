#include <iostream>
using namespace std;

int main(void) {
  int a;
  cin >> a;
  if (a == 1)
    cout << "YES\n1\n";
  if (a == 2)
    cout << "NO\n";
  if (a == 3) {
    cout << "YES\n1 3 2 ";
  }
  if (a > 3) {
    cout << "YES\n1 3 2 ";
    for (int i = 4; i <= a; i++) {
      cout << i << " ";
    }
  }
  return 0;
}