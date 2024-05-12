#include <iostream>
#include <queue>

using namespace std;

int a;

int arr[65][65];
int vis[65][65];

int xf[2] = {1, 0};
int yf[2] = {0, 1};

void bfs(int tx, int ty) {
  queue<pair<int, int>> q;
  q.push({tx, ty});
  vis[tx][ty] = 1;
  while (!q.empty()) {
    int x = q.front().first;
    int y = q.front().second;
    q.pop();
    for (int i = 0; i < 2; i++) {
      int nx = x + (xf[i] * arr[x][y]);
      int ny = y + (yf[i] * arr[x][y]);
      if ((0 <= nx && nx < a) && (0 <= ny && ny < a) && !vis[nx][ny]) {
        vis[nx][ny] = 1;
        q.push({nx, ny});
      }
    }
  }
}

int main(void) {
  cin >> a;
  for (int i = 0; i < a; i++) {
    for (int j = 0; j < a; j++) {
      int q;
      cin >> q;
      if (q != -1)
        arr[i][j] = q;
    }
  }
  bfs(0, 0);
  if (vis[a - 1][a - 1])
    cout << "HaruHaru\n";
  else
    cout << "Hing\n";
  return 0;
}