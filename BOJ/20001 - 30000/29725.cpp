#include <iostream>
using namespace std;

int main(void) {
  cin.tie(0)->sync_with_stdio(0);
  int cntb = 0;
  int cntw = 0;
  string a;
  for (int i = 0; i < 8; i++) {
    cin >> a;
    for (int j = 0; j < 8; j++) {
      if (a[j] == 'p')
        cntb++;
      if (a[j] == 'P')
        cntw++;
      if (a[j] == 'n')
        cntb += 3;
      if (a[j] == 'N')
        cntw += 3;
      if (a[j] == 'b')
        cntb += 3;
      if (a[j] == 'B')
        cntw += 3;
      if (a[j] == 'r')
        cntb += 5;
      if (a[j] == 'R')
        cntw += 5;
      if (a[j] == 'q')
        cntb += 9;
      if (a[j] == 'Q')
        cntw += 9;
    }
  }
  cout << cntw - cntb << "\n";
  return 0;
}