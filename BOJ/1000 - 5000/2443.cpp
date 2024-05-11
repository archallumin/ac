#include <iostream>
using namespace std;

int main(void) {
  int n;
  cin >> n;
  int a_ = (n * 2) - 1;
  for (int a = 0; a < n; a++) {
    for (int b = 0; b < a; b++) {
      cout << " ";
    }
    for (int c = 0; c < a_; c++) {
      cout << "*";
    }
    a_ = a_ - 2;
    cout << "\n";
  }
  return 0;
}