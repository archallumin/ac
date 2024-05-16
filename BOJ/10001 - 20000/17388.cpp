#include <iostream>
using namespace std;

int main(void) {
  int a, b, c;
  cin >> a >> b >> c;
  if (a + b + c >= 100)
    cout << "OK\n";
  else {
    int q = min(min(a, b), c);
    if (q == a)
      cout << "Soongsil\n";
    else if (q == b)
      cout << "Korea\n";
    else if (q == c)
      cout << "Hanyang\n";
  }
  return 0;
}