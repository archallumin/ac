#include <iostream>
using namespace std;

int main(void) {
  cin.tie(0)->sync_with_stdio(0);
  int board[10001];
  int a, b;
  cin >> a >> b;
  for (int i = 0; i < a; i++) {
    cin >> board[i];
  }
  // 두 포인터 연습
  int ans = 0;
  int st = 0;
  int en = 0;
  int s = 0;
  while (en <= a) {
    if (s < b) {
      s += board[en++];
    } else if (s >= b) {
      s -= board[st++];
    }
    if (s == b)
      ans++;
  }
  cout << ans << "\n";
  return 0;
}