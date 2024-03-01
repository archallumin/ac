#include <iostream>
using namespace std;

int main(void) {
  cin.tie(0)->sync_with_stdio(0);
  int t;
  cin >> t;
  while (t--) {
    int a;
    cin >> a;
    if (a == 1)
      cout << "0\n";
    else if (a == 2)
      cout << "11\n";
    else if (a == 3)
      cout << "121\n";
    else if (a == 4)
      cout << "1111\n";
    else {
      cout << "11";
      for (int i = 0; i < a - 4; i++) {
        cout << "0";
      }
      cout << "11\n";
    }
  }
  return 0;
}