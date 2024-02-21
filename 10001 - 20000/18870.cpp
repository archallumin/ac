#include <algorithm>
#include <iostream>
#include <vector>
using namespace std;

int arrr[1000001];
vector<int> arr;

int main(void) {
  cin.tie(0)->sync_with_stdio(0);
  int a;
  cin >> a;
  for (int i = 0; i < a; i++) {
    cin >> arrr[i];
    arr.push_back(arrr[i]);
  }
  sort(arr.begin(), arr.end());
  arr.erase(unique(arr.begin(), arr.end()), arr.end());
  for (int i = 0; i < a; i++) {
    int val = lower_bound(arr.begin(), arr.end(), arrr[i]) - arr.begin();
    cout << val << " ";
  }
  cout << "\n";
  return 0;
}