// 분할 정복의 기초
// 그 두 번째

#include <iostream>
using namespace std;

int paper[2188][2188], cnt[3];

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
    ++cnt[cur + 1];
  } else {
    check(y, x, n / 3);
    check(y, x + n / 3, n / 3);
    check(y, x + (2 * (n / 3)), n / 3);
    check(y + n / 3, x, n / 3);
    check(y + n / 3, x + n / 3, n / 3);
    check(y + n / 3, x + (2 * (n / 3)), n / 3);
    check(y + (2 * (n / 3)), x, n / 3);
    check(y + (2 * (n / 3)), x + n / 3, n / 3);
    check(y + (2 * (n / 3)), x + (2 * (n / 3)), n / 3);
    // 이런 걸 제대로 배워야지...
    // 나중에는 언젠가 혼자서 풀 수 있기를
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
  cout << cnt[0] << "\n" << cnt[1] << "\n" << cnt[2] << "\n";
  return 0;
}