#include <iostream>
using namespace std;

int main(void) {
  int a;
  cin >> a;
  while (a > 0) {
    cout << "long ";
    a = a - 4;
  }
  cout << "int\n";
  return 0;
}