#include <iostream>
using namespace std;

int a, b;
int arr[9];

void bt(int x, int y) {
  if (y == b) {
    for (int i = 0; i < b; i++)
      cout << arr[i] << " ";
    cout << "\n";
    return;
  } else {
    for (int i = x; i <= a; i++) {
      arr[y] = i;
      bt(i, y + 1);
    }
  }
}

int main(void) {
  cin >> a >> b;
  bt(1, 0);
  return 0;
}