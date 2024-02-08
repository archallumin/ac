#include <iostream>
#include <string>
using namespace std;

int main(void) {
  cin.tie(0)->sync_with_stdio(0);
  int t;
  cin >> t;
  for (int i = 1; i <= t; i++) {
    int a;
    cin >> a;
    if (a == 0) {
      cout << "Case #" << i << ": INSOMNIA\n";
      continue;
    }
    bool cnt[10] = {false};
    for (int j = 1;; j++) {
      int tmp = a * j;
      string str = to_string(tmp);
      for (int k = 0; k < str.length(); k++) {
        cnt[str[k] - '0'] = true;
      }
      bool flag = true;
      for (int k = 0; k < 10; k++) {
        if (cnt[k] == false) {
          flag = false;
          break;
        }
      }
      if (flag) {
        cout << "Case #" << i << ": " << tmp << "\n";
        break;
      }
    }
  }
  return 0;
}