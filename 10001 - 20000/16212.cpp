#include <algorithm>
#include <iostream>
#include <vector>
using namespace std;

int a;
vector<int> arr;

int main(void) {
  cin.tie(0)->sync_with_stdio(0);
  cin >> a;
  arr.resize(a);
  for (int i = 0; i < a; i++) {
    cin >> arr[i];
  }
  sort(arr.begin(), arr.end());
  for (auto res : arr) {
    cout << res << " ";
  }
  cout << "\n";
  return 0;
}