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

void mul(vector<base> &A) {
  int s = 1;
  while (s <= A.size())
    s <<= 1;
  s <<= 1;
  A.resize(s);
  fft(A, A);
  for (int i = 0; i < s; i++)
    A[i] *= A[i];
  ifft(A, A);
}

int main(void) {
  cin.tie(0)->sync_with_stdio(0);
  vector<base> arr(200001);
  int a;
  cin >> a;
  for (int i = 0; i < a; i++) {
    int n;
    cin >> n;
    arr[n] = base(1, 0);
  }
  arr[0] = base(1, 0);
  mul(arr);
  int b, cnt = 0;
  cin >> b;
  while (b--) {
    int n;
    cin >> n;
    if (round(arr[n].real()) > 0)
      cnt++;
  }
  cout << cnt << "\n";
  return 0;
}