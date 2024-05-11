#include <iostream>
using namespace std;

int copyright(int a, int i) {
  if (a == 1) {
    return a * i;
  } else {
    return (a * i) - (a - 1);
  }
}

int main(void) {
  int a, i;
  cin >> a >> i;
  cout << copyright(a, i) << "\n";
  return 0;
}