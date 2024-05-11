#include <iostream>
using namespace std;

int main(void) {
  int a, arr[10001], x, val = 0;
  cin >> a >> x;
  for (int i = 0; i < a; i++) {
    cin >> arr[i];
  }
  for (int i = 0; i < a; i++) {
    if (arr[i] < x) {
      val = arr[i];
      cout << val << " ";
    }
  }
  cout << "\n";
  return 0;
}