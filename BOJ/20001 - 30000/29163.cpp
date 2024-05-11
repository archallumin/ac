#include <iostream>
using namespace std;

int main(void) {
  int a, o = 0, e = 0;
  cin >> a;
  while (a--) {
    int q;
    cin >> q;
    if (q % 2)
      e++;
    else
      o++;
  }
  cout << (o > e ? "Happy\n" : "Sad\n");
  return 0;
}