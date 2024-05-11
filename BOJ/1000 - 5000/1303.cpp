#include <iostream>
#include <queue>
#define ll long long
using namespace std;

int a, b, sol;
char arr[101][101];
int vis[101][101];
ll be = 0, w = 0;
queue<pair<int, int>> q;

int X[4] = {0, 0, 1, -1};
int Y[4] = {1, -1, 0, 0};

ll bfs(int tx, int ty) {
  int sol = 1;
  vis[tx][ty] = 1;
  while (!q.empty()) {
    int x = q.front().first;
    int y = q.front().second;
    q.pop();
    for (int i = 0; i < 4; i++) {
      int nx = x + X[i];
      int ny = y + Y[i];
      if ((0 <= nx && nx < a) && (0 <= ny && ny < b) && !vis[nx][ny] &&
          arr[nx][ny] == arr[tx][ty]) {
        vis[nx][ny] = 1;
        sol++;
        q.push({nx, ny});
      }
    }
  }
  return sol * sol;
}

int main(void) {
  cin.tie(0)->sync_with_stdio(0);
  cin >> b >> a;
  for (int i = 0; i < a; i++) {
    for (int j = 0; j < b; j++) {
      cin >> arr[i][j];
    }
  }
  for (int i = 0; i < a; i++) {
    for (int j = 0; j < b; j++) {
      if (!vis[i][j]) {
        q.push({i, j});
        if (arr[i][j] == 'W')
          w += bfs(i, j);
        else
          be += bfs(i, j);
      }
    }
  }
  cout << w << " " << be << "\n";
  return 0;
}