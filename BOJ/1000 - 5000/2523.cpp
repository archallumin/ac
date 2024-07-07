#include <iostream>
using namespace std;

int main(void) {
  int a;
  cin >> a;
  for (int i = 1; i <= a; i++) {
    for (int k = i; k >= 1; k--) {
      cout << "*";
    }
    cout << "\n";
  }
  for (int i = a - 1; i >= 1; i--) {
    for (int k = i; k >= 1; k--) {
      cout << "*";
    }
    cout << "\n";
  }
  return 0;
}