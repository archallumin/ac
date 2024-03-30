#include <iostream>
using namespace std;

int main(void) {
  int arr[5] = {1, 2, 4, 8, 20};
  int t;
  cin >> t;
  while (t--) {
    int a;
    cin >> a;
    if (a <= 4)
      cout << arr[a] << "\n";
    else
      cout << "frogger\n";
  }
  return 0;
}