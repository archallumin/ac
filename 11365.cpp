#include <algorithm>
#include <iostream>
using namespace std;

int main(void) {
  cin.tie(0)->sync_with_stdio(0);
  while (1) {
    string a;
    cin >> a;
    if (a == "END")
      break;
    reverse(a.begin(), a.end());
    cout << a << "\n";
  }
  return 0;
}