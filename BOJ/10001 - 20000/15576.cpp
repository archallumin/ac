#include <algorithm>
#include <complex>
#include <iostream>
#include <vector>
using namespace std;

#define base complex<double>

// recursive fft

void fft(vector<base> &a, vector<base> &A) {
  int s = (int)a.size();
  if (s == 1) {
    A[0] = a[0];
    return;
  }
  vector<base> e(s / 2), o(s / 2), E(s / 2), O(s / 2);
  for (int i = 0; i < s / 2; i++) {
    e[i] = a[2 * i];
    o[i] = a[2 * i + 1];
  }
  fft(e, E);
  fft(o, O);
  double val = -2.0 * M_PI / s;
  base w = base(cos(val), sin(val));
  base z = base(1);
  for (int i = 0; i < s / 2; i++) {
    A[i] = E[i] + z * O[i];
    A[i + s / 2] = E[i] - z * O[i];
    z *= w;
  }
}

void ifft(vector<base> &A, vector<base> &a) {
  reverse(++A.begin(), A.end());
  fft(A, a);
  int s = (int)a.size();
  for (int i = 0; i < s; i++) {
    a[i] /= s;
  }
}

vector<int> mul(vector<base> &A, vector<base> &B) {
  int s = (int)max(A.size(), B.size());
  int i = 0;
  while ((1 << i) < (s << 1))
    i++;
  s = 1 << i;
  A.resize(s);
  B.resize(s);
  fft(A, A);
  fft(B, B);
  for (int i = 0; i < s; i++) {
    A[i] *= B[i];
  }
  ifft(A, A);
  vector<int> res(s);
  for (int k = 0; k < s; k++) {
    res[k] = (int)round(A[k].real());
  }
  return res;
}

int main(void) {
  cin.tie(0)->sync_with_stdio(0);
  vector<base> a;
  vector<base> b;
  string n, m;
  cin >> n >> m;
  if (n == "0" || m == "0") {
    cout << "0\n";
    return 0;
  }
  for (int i = 0; i < n.length(); i++) {
    a.push_back(n[i] - '0');
  }
  for (int i = 0; i < m.length(); i++) {
    b.push_back(m[i] - '0');
  }
  reverse(a.begin(), a.end());
  reverse(b.begin(), b.end());
  vector<int> res = mul(a, b);
  // 올림 처리
  for (int i = 0; i < res.size(); i++) {
    if (res[i] >= 10) {
      res[i + 1] += res[i] / 10;
      res[i] %= 10;
    }
  }
  while (res.back() == 0) {
    res.pop_back();
  }
  reverse(res.begin(), res.end());
  for (int i = 0; i < res.size(); i++) {
    cout << res[i] << "";
  }
  cout << "\n";
  return 0;
}