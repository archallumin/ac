#include <iostream>
using namespace std;

int main(void) {
  int a, b = 0, s = 0;
  cin >> a;
  for (int i = 1; i <= a; i++) {
    char str;
    cin >> str;
    if (str == 'O') {
      s += i + b;
      b++;
    } else {
      b = 0;
    }
  }
  cout << s << "\n";
  return 0;
}