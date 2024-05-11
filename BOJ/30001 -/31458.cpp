#include <cctype>
#include <iostream>
using namespace std;

// 보아하니...
//! 왼쪽 느낌표가 홀수 개면 무조건 반전이다.
/// 오른쪽 느낌표:
/// 무조건 1이다.

int main(void) {
  int t;
  cin >> t;
  while (t--) {
    string a;
    int cnt = 0, tmp;
    cin >> a;
    for (int i = 0; i < a.length(); i++) {
      if (isdigit(a[i])) {
        tmp = i;
        break;
      }
      cnt++;
    }
    // 만약 cnt가 짝수이고 팩토리얼 느낌표가 있다면...
    if (cnt % 2 == 0 && tmp != a.length() - 1) {
      cout << "1\n"; // 무조건 1 출력
    }
    // 만약 카운트가 홀수 팩토리얼 느낌표 있음:
    else if (cnt % 2 != 0 && tmp != a.length() - 1) {
      cout << "0\n"; // 0
    }
    // 만약 카운트 짝수 팩토리얼 없음
    else if (cnt % 2 == 0 && tmp == a.length() - 1) {
      cout << a[tmp] << "\n";
    }
    // 홀 노 팩
    else if (cnt % 2 != 0 && tmp == a.length() - 1) {
      if (a[tmp] == '1')
        cout << "0\n";
      else {
        cout << "1\n";
      }
    }
  }
  return 0;
}