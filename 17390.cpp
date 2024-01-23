#include <algorithm>
#include <iostream>
#include <vector>
using namespace std;

int main(void) {
  ios_base::sync_with_stdio(false);
  cin.tie(0);
  int m, n;
  cin >> m >> n;
  vector<int> arr(m + 1);
  vector<int> total(m + 1);
  for (int i = 1; i <= m; i++) {
    cin >> arr[i];
  }
  sort(arr.begin(), arr.end());
  for (int i = 1; i <= m; i++) {
    total[i] = total[i - 1] + arr[i];
  }
  while (n--) {
    int o, p;
    cin >> o >> p;
    cout << total[p] - total[o - 1] << "\n";
  }
  return 0;
}