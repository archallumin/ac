#include <iostream>
using namespace std;

int main(void) {
  int t;
  cin >> t;
  while (t--) {
    int a;
    cin >> a;
    for (int i = 0; i < 32; i++) {
      if (a & (1 << i))
        cout << i << " ";
    }
    cout << "\n";
  }
  return 0;
}