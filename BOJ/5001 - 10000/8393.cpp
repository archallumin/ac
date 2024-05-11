#include <iostream>
using namespace std;

int main(void) {
  cin.tie(NULL);
  cout.tie(NULL);
  ios::sync_with_stdio(false);
  int a;
  int add = 0;
  cin >> a;
  for (int i = 1; i <= a; i++) {
    add += i;
  }
  cout << add << "\n";
  return 0;
}