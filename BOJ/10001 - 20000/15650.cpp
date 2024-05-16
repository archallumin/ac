#include <iostream>
using namespace std;

int a, b;
int vis[9], arr[9];

void bt(int x, int y) {
  if (y == b) {
    for (int i = 0; i < b; i++)
      cout << arr[i] << " ";
    cout << "\n";
    return;
  } else {
    for (int i = x; i <= a; i++) {
      if (!vis[i]) {
        vis[i] = 1;
        arr[y] = i;
        bt(i + 1, y + 1);
        vis[i] = 0;
      }
    }
  }
}

int main(void) {
  cin >> a >> b;
  bt(1, 0);
  return 0;
}