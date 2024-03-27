#include <iostream>
using namespace std;

int main(void) {
  cin.tie(0)->sync_with_stdio(0);
  int t;
  cin >> t;
  while (t--) {
    int a;
    cin >> a;
    if ((a & (-a)) == a)
      cout << "1\n";
    else
      cout << "0\n";
  }
  return 0;
}