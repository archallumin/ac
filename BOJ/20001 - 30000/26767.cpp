#include <iostream>
using namespace std;

int main(void) {
  int a;
  cin >> a;
  for (int i = 1; i <= a; i++) {
    if (!(i % 7) && (i % 11))
      cout << "Hurra!\n";
    else if ((i % 7) && !(i % 11))
      cout << "Super!\n";
    else if (!(i % 7) && !(i % 11))
      cout << "Wiwat!\n";
    else
      cout << i << "\n";
  }
  return 0;
}