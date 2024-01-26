#include <iostream>
using namespace std;

int palindrome(int n) {
  int tmp = 0;
  int org = n;
  while (n > 0) {
    tmp *= 10;
    tmp += n % 10;
    n /= 10;
  }
  if (tmp == org)
    return 1;
  else
    return 0;
}

int main(void) {
  cin.tie(0)->sync_with_stdio(0);
  int cnt = 0;
  cout << "{";
  for (int i = 5; i <= 10000000; i++) {
    if (palindrome(i)) {
      cnt++;
      cout << i << ", ";
    }
  }
  cout << "}";
  cout << "\n" << cnt;
  return 0;
}

// 1990번 전처리용으로 작성한 코드입니다.