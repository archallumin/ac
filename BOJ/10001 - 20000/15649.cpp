#include <iostream>
using namespace std;

int a, b;
int vis[9], arr[9];

void bt(int x) {
  if (x == b) {
    for (int i = 0; i < b; i++)
      cout << arr[i] << " ";
    cout << "\n";
    return;
  } else {
    for (int i = 1; i <= a; i++) {
      if (!vis[i]) {
        vis[i] = 1;
        arr[x] = i;
        bt(x + 1);
        vis[i] = 0;
      }
    }
  }
}

int main(void) {
  cin >> a >> b;
  bt(0);
  return 0;
}