#include <iostream>
using namespace std;
using ll = long long;

// 분할 정복을 이용한 거듭제곱

ll dacpow(int a, int b, int mod) {
  if (b == 0)
    return 1;
  ll tmp = dacpow(a, b / 2, mod);
  tmp = (tmp * tmp) % mod;
  if (b % 2 == 1)
    tmp = (tmp * a) % mod;
  return tmp;
}

int main(void) {
  int a, b, c;
  cin >> a >> b >> c;
  cout << dacpow(a, b, c) << "\n";
  return 0;
}