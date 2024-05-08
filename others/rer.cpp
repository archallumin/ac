#include <cmath>
#include <iostream>

using namespace std;

int main(void) {
  int a;
  double b;
  cin >> a >> b;
  cout.precision(4);
  cout << fixed << a / pow(b, 2) << "\n";
}