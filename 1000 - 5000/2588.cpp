#include <iostream>
#include <vector>
using namespace std;

static vector<int> ans(int n) {
  vector<int> val;
  while (true) {
    val.push_back(n % 10);
    n = n / 10;
    if (n == 0)
      break;
  }
  return val;
}

int main(void) {
  int a, b;
  cin >> a;
  cin >> b;
  ans(b);
  cout << a * ans(b)[0] << "\n";
  cout << a * ans(b)[1] << "\n";
  cout << a * ans(b)[2] << "\n";
  cout << a * b << "\n";
  return 0;
}