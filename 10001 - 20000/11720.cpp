#include <iostream>
using namespace std;

int main(void) {
  string a;
  int t, val = 0;
  cin >> t;
  cin >> a;
  for (int i = 0; i < t; i++) {
    val = val + a[i];
  }
  cout << val - (48 * t) << "\n";
  return 0;
}