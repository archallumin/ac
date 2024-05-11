#include <iostream>
using namespace std;

int main(void) {
  int t;
  cin >> t;
  while (t--) {
    int cnt = 0, pnt = 0;
    string a;
    cin >> a;
    for (int i = 0; i < a.length(); i++) {
      if (a[i] == 'O') {
        pnt++;
        cnt += pnt;
      } else {
        pnt = 0;
      }
    }
    cout << cnt << "\n";
  }
  return 0;
}