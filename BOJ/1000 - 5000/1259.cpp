#include <algorithm>
#include <iostream>
using namespace std;

int main(void) {
  string a, b;
  while (1) {
    cin >> a;
    if (a == "0")
      break;
    b = a;
    reverse(a.begin(), a.end());
    if (a == b)
      cout << "yes\n";
    else
      cout << "no\n";
  }
  return 0;
}