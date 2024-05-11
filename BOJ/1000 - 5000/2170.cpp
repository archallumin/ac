#include <algorithm>
#include <iostream>
using namespace std;

typedef struct v {
  int a;
  int b;
} v;

bool cmp(const v &a, const v &b) { return a.a < b.a; }

v arr[1000001];

int main(void) {
  cin.tie(0)->sync_with_stdio(0);
  int s, e, ans = 0;
  s = e = -1000000007;
  int t;
  cin >> t;
  for (int i = 0; i < t; i++) {
    cin >> arr[i].a >> arr[i].b;
  }
  sort(arr, arr + t, cmp);
  for (int i = 0; i < t; i++) {
    // 스위핑
    if (e < arr[i].a) {
      ans += e - s;
      s = arr[i].a;
    }
    if (e < arr[i].b) {
      e = arr[i].b;
    }
  }
  ans += e - s;
  cout << ans << "\n";
  return 0;
}