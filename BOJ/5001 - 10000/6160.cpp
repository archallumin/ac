#include <algorithm>
#include <iostream>
#include <tuple>
#include <vector>

using namespace std;
static bool cmp(tuple<int, int, int> &v1, tuple<int, int, int> &v2) {
  return get<0>(v1) < get<0>(v2);
}

int main(void) {
  cin.tie(0)->sync_with_stdio(0);
  vector<tuple<int, int, int>> ar;
  int t, c, max, idx;
  cin >> t >> c;
  for (int i = 0; i < t; i++) {
    int a, b;
    cin >> a >> b;
    ar.push_back({a, b, i + 1});
  }
  sort(ar.begin(), ar.end(), cmp);
  max = 0;
  idx = 0;
  for (int i = t - 1; i >= t - c; i--) {
    if (get<1>(ar[i]) > max) {
      max = get<1>(ar[i]);
      idx = get<2>(ar[i]);
    }
  }
  cout << idx << "\n";
}