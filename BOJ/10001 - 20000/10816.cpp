#include <algorithm>
#include <iostream>
#include <vector>
using namespace std;

vector<int> arr;

int main(void) {
  cin.tie(0)->sync_with_stdio(0);
  int a, b;
  cin >> a;
  while (a--) {
    int q;
    cin >> q;
    arr.push_back(q);
  }
  sort(arr.begin(), arr.end());
  cin >> b;
  while (b--) {
    int q2;
    cin >> q2;
    cout << upper_bound(arr.begin(), arr.end(), q2) -
                lower_bound(arr.begin(), arr.end(), q2)
         << " ";
  }
  cout << "\n";
  return 0;
}