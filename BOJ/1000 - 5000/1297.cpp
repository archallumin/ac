#include <cmath>
#include <iostream>
using namespace std;

int main(void) {
  int D, H, W;
  cin >> D >> H >> W;
  double A = D / sqrt(pow(H, 2) + pow(W, 2));
  cout.precision(0);
  cout << fixed << floor(H * A) << " " << floor(W * A) << "\n";
  return 0;
}