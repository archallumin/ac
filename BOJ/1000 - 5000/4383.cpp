#include <cmath>
#include <iostream>

using namespace std;

int main(void) {
  cin.tie(0)->sync_with_stdio(0);
  int a;
  while (cin >> a) {
    int arr[3001], val[3001] = {0};
    if (a == 1) {
      int b;
      cin >> b;
      cout << "Jolly\n";
      continue;
    }
    int flag = 1;
    for (int i = 0; i < a; i++) {
      cin >> arr[i];
    }
    for (int i = 1; i < a; i++) {
      val[abs(arr[i] - arr[i - 1])] = 1;
    }
    for (int i = 1; i < a; i++) {
      if (val[i] == 0)
        flag = 0;
    }
    if (flag)
      cout << "Jolly\n";
    else
      cout << "Not jolly\n";
  }
  return 0;
}