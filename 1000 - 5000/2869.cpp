#include <iostream>
#define fastio                                                                 \
  cin.tie(0);                                                                  \
  ios::sync_with_stdio(0);
using namespace std;

int main(void) {
  fastio;
  int a, b, c;
  int day = 0;
  cin >> a >> b >> c;
  if (a > c)
    day = 1;
  else if ((c - a) % (a - b) == 0)
    day = (c - a) / (a - b) + 1;
  else
    day = (c - a) / (a - b) + 2;
  cout << day << "\n";
  return 0;
}