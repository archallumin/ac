#include <iostream>
using namespace std;

int main(void) {
  int t;
  cin >> t;
  while (t--) {
    int a, b, c;
    cin >> a >> b >> c;
    if (c % a == 0) {
      cout << a;
      if (c / a < 10)
        cout << 0;
      cout << c / a << "\n";
    } else {
      cout << c % a;
      if (c / a + 1 < 10)
        cout << 0;
      cout << c / a + 1 << "\n";
    }
  }
  return 0;
}