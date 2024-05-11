#include <iostream>
using namespace std;

const double pi = 3.141592;

int main(void) {
  int a, b;
  cin >> a >> b;
  cout.precision(6);
  cout << fixed << (double)(2 * pi * b) + ((2 * a)) << "\n";
  return 0;
}