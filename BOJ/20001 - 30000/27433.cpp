#include <iostream>
#define ll long long
using namespace std;

ll factorial(int x) {
  if (x <= 1)
    return 1;
  return x * factorial(x - 1);
}

int main(void) {
  int a;
  cin >> a;
  cout << factorial(a) << "\n";
  return 0;
}