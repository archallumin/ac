#include <iostream>
#include <queue>

using namespace std;

int a;

int vis[303][303];
int dist[303][303];

int xf[8] = {1, 2, 2, 1, -1, -2, -2, -1};
int yf[8] = {2, 1, -1, -2, -2, -1, 1, 2};

queue<pair<int, int>> qbrd;

void bfs(int tx, int ty) {
  while (!qbrd.empty()) {
    int x = qbrd.front().first;
    int y = qbrd.front().second;
    vis[x][y] = 1;
    qbrd.pop();
    if (x == tx && y == ty) {
      cout << dist[x][y] << "\n";
      return;
    }
    for (int i = 0; i < 8; i++) {
      int nx = x + xf[i];
      int ny = y + yf[i];
      if ((0 <= nx && nx < a) && (0 <= ny && ny < a) && !vis[nx][ny]) {
        vis[nx][ny] = 1;
        dist[nx][ny] = dist[x][y] + 1;
        qbrd.push({nx, ny});
      }
    }
  }
}

int main(void) {
  cin.tie(0)->sync_with_stdio(0);
  int t;
  cin >> t;
  while (t--) {
    cin >> a;
    int cx, cy, rx, ry;
    cin >> cx >> cy;
    cin >> rx >> ry;
    qbrd.push({cx, cy});
    bfs(rx, ry);
    for (int i = 0; i < 300; i++) {
      for (int j = 0; j < 300; j++) {
        vis[i][j] = 0;
        dist[i][j] = 0;
      }
    }
    while (!qbrd.empty())
      qbrd.pop();
  }
  return 0;
}

// 이런 건 익숙하지 않아서 티스토리 블로그 코드를 일부 참고하였다.
// 언젠가는 내것이 될 수 있기를...