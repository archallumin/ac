#include <iostream>
using namespace std;

int main(void) {
  int a, arr[101], b, val = 0;
  cin >> a;
  for (int i = 0; i < a; i++) {
    cin >> arr[i];
  }
  cin >> b;
  for (int i = 0; i < a; i++) {
    if (arr[i] == b)
      val++;
  }
  cout << val << "\n";
  return 0;
}