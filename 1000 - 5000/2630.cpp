// 분할 정복의 기초

#include <iostream>
using namespace std;

int paper[128][128], cnt[2];

void check(int y, int x, int n) {
  int cur = paper[y][x];
  int nomixed = 1;
  for (int i = y; i < y + n; i++) {
    for (int j = x; j < x + n; j++) {
      if (cur != paper[i][j]) {
        nomixed = 0;
        break;
      }
    }
    if (!nomixed)
      break;
  }
  if (nomixed) {
    ++cnt[cur];
  } else {
    check(y, x, n / 2);
    check(y + n / 2, x, n / 2);
    check(y, x + n / 2, n / 2);
    check(y + n / 2, x + n / 2, n / 2);
  }
}

int main(void) {
  int a;
  cin >> a;
  for (int i = 0; i < a; i++) {
    for (int j = 0; j < a; j++) {
      cin >> paper[i][j];
    }
  }
  check(0, 0, a);
  cout << cnt[0] << "\n" << cnt[1] << "\n";
  return 0;
}