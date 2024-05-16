#include <iostream>
using namespace std;

int a, b;
int arr[8];

void bt(int x) {
  if (x == b) {
    for (int i = 0; i < b; i++)
      cout << arr[i] << " ";
    cout << "\n";
    return;
  } else {
    for (int i = 1; i <= a; i++) {
      arr[x] = i;
      bt(x + 1);
    }
  }
}

int main(void) {
  cin.tie(0)->sync_with_stdio(0);
  cin >> a >> b;
  bt(0);
  return 0;
}