#include <iostream>
using namespace std;

int main(void) {
  int a, arr[31] = {
             0,
         };
  for (int i = 0; i < 28; i++) {
    cin >> a;
    arr[a] = 1;
  }
  for (int j = 1; j <= 30; j++) {
    if (!arr[j])
      cout << j << "\n";
  }
  return 0;
}