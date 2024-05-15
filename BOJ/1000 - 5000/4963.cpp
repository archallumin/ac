#include <bits/stdc++.h>
using namespace std;

int a, b, cnt;
int arr[55][55];
int vis[55][55];

int X[8] = {0, 0, 1, -1, 1, -1, 1, -1};
int Y[8] = {1, -1, 0, 0, 1, 1, -1, -1};

void dfs(int y, int x) {
  for (int i = 0; i < 8; i++) {
    int xx = x + X[i];
    int yy = y + Y[i];
    if (xx < 0 || yy < 0 || xx >= a || yy >= b)
      continue;
    if (!vis[yy][xx] && arr[yy][xx]) {
      vis[yy][xx] = 1;
      dfs(yy, xx);
    }
  }
}

int main(void) {
  while (1) {
    cin >> a >> b;
    if (a == 0 && b == 0)
      break;
    int cnt = 0;
    for (int i = 0; i < b; i++) {
      for (int j = 0; j < a; j++) {
        cin >> arr[i][j];
      }
    }
    for (int k = 0; k < b; k++) {
      for (int l = 0; l < a; l++) {
        if (arr[k][l] && !vis[k][l]) {
          vis[k][l] = 1;
          dfs(k, l);
          cnt++;
        }
      }
    }
    cout << cnt << "\n";
    for (int i = 0; i < b; i++) {
      for (int j = 0; j < a; j++) {
        vis[i][j] = 0;
      }
    }
  }
  return 0;
}