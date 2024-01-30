#include <iostream>
using namespace std;

int main(void) {
  int a, b;
  cin >> a;
  string s2 = "", s1;
  for (int i = 0; i < a; i++) {
    cin >> b;
    int ans = -1;
    int c = 0;
    for (int j = 0; j < b; j++) {
      cin >> c >> s1;
      if (ans < c) {
        ans = c;
        s2 = s1;
      }
    }
    cout << s2 << "\n";
  }
  return 0;
}