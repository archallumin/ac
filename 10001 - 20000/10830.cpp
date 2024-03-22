#include <iostream>
#include <vector>
#define ll long long
#define vv vector<vector<ll>>
using namespace std;

// 행렬 곱셈
// 연산자 오버로딩은 더 배워야 할 듯

vv operator*(const vv &a, const vv &b) {
  int s = a.size();
  vv res(s, vector<ll>(s));
  for (int i = 0; i < s; i++) {
    for (int j = 0; j < s; j++) {
      for (int k = 0; k < s; k++) {
        res[i][j] += a[i][k] * b[k][j];
      }
      res[i][j] %= 1000;
    }
  }
  return res;
}

vv pow(vv a, ll b) {
  int s = a.size();
  vv res(s, vector<ll>(s));
  // 행렬 곱셈의 항등원
  for (int i = 0; i < s; i++) {
    res[i][i] = 1;
  }
  // * 분할 정복
  while (b > 0) {
    if (b % 2) {
      b -= 1;
      res = res * a;
    } else {
      a = a * a;
      b /= 2;
    }
  }
  return res;
}

void print(const vv &a) {
  int s = a.size();
  for (int i = 0; i < s; i++) {
    for (int j = 0; j < s; j++) {
      cout << a[i][j] << " ";
    }
    cout << "\n";
  }
}

int main(void) {
  int a;
  ll b;
  cin >> a >> b;
  vv m(a, vector<ll>(a));
  for (int i = 0; i < a; i++) {
    for (int j = 0; j < a; j++) {
      cin >> m[i][j];
    }
  }
  print(pow(m, b));
  return 0;
}

// 더 배워야 할 듯함.
// 참고 블로그:
// https://velog.io/@jxlhe46/%EB%B0%B1%EC%A4%80-10830%EB%B2%88.-%ED%96%89%EB%A0%AC-%EC%A0%9C%EA%B3%B1