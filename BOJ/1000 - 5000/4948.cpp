#include <cmath>
#include <iostream>
using namespace std;

int nums[246913];

int main(void) {
  cin.tie(0)->sync_with_stdio(0);
  nums[0] = 0;
  nums[1] = 0;
  nums[2] = 0;
  for (int i = 2; i <= sqrt(246913); i++) {
    if (nums[i] == 0) {
      for (int j = 2; i * j < 246913; j++) {
        nums[i * j] = 1;
      }
    }
  }
  while (1) {
    int cnt = 0;
    int a;
    cin >> a;
    if (a == 0)
      break;
    for (int i = a + 1; i <= a * 2; i++) {
      if (nums[i] == 0)
        cnt++;
    }
    cout << cnt << "\n";
  }
  return 0;
}