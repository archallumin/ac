#include <iostream>
using namespace std;

int main(void) {
  int a;
  cin >> a;
  while (a != 0) {
    if (a - 5 >= 0) {
      a -= 5;
      cout << "V";
    } else {
      a -= 1;
      cout << "I";
    }
  }
  return 0;
}