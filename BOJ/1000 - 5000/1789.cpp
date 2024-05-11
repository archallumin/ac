#include <iostream>
using namespace std;

int main(void) {
  cin.tie(0)->sync_with_stdio(0);
  long long a;
  long long go = 0;
  long long cnt = 1;
  long long cncnt = 0;
  cin >> a;
  while (1) {
    go += cnt;
    cncnt++;
    if (go > a) {
      cncnt--;
      break;
    }
    cnt++;
  }
  cout << cncnt << "\n";
  return 0;
}