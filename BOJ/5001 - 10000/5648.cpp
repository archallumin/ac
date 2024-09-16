#include <algorithm>
#include <iostream>
#include <string>
#define ll long long
using namespace std;

ll a[1000001];

int main(void) {
  ll n;
  cin >> n;
  for (int i = 0; i < n; i++) {
    cin >> a[i];
  }
  for (int i = 0; i < n; i++) {
    string ac = to_string(a[i]);
    reverse(ac.begin(), ac.end());
    a[i] = atoll(ac.c_str());
  }
  sort(a, a + n);
  for (int i = 0; i < n; i++) {
    cout << a[i] << "\n";
  }
  return 0;
}