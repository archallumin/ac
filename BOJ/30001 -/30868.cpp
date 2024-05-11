#include <iostream>
using namespace std;

int main(void) {
  cin.tie(0)->sync_with_stdio(0);
  int t;
  cin >> t;
  while (t--) {
    int a;
    cin >> a;
    while (1) {
      if (a == 0) {
        cout << "\n";
        break;
      }
      if (a - 5 >= 0) {
        a -= 5;
        cout << "++++ ";
      } else if (a - 1 >= 0) {
        a -= 1;
        cout << "|";
      }
    }
  }
  return 0;
}