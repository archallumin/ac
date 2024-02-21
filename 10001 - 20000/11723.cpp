#include <iostream>
using namespace std;

int main(void) {
  cin.tie(NULL);
  cout.tie(NULL);
  ios::sync_with_stdio(false);
  int t;
  int arr = 0;
  cin >> t;
  while (t--) {
    string a;
    int b;
    cin >> a;
    if (a == "add") {
      cin >> b;
      arr |= (1 << b);
    }
    if (a == "remove") {
      cin >> b;
      arr &= ~(1 << b);
    }
    if (a == "toggle") {
      cin >> b;
      arr ^= (1 << b);
    }
    if (a == "check") {
      cin >> b;
      if (arr & (1 << b))
        cout << "1\n";
      else
        cout << "0\n";
    }
    if (a == "empty") {
      arr = 0;
    }
    if (a == "all") {
      arr = (1 << 21) - 1;
    }
  }
  return 0;
}