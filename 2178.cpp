#include <iostream>
#include <queue>
using namespace std;

int a, b;

int maze[101][101];
int vis[101][101];
int loc[101][101];

int xf[4] = {1, -1, 0, 0};
int yf[4] = {0, 0, 1, -1};

queue<pair<int, int>> qmaze;

void bfs(int x, int y)
{
  vis[x][y] = 1;
  qmaze.push({x, y});
  loc[x][y] = 1;
  while (!qmaze.empty())
  {
    int nextx = qmaze.front().first;
    int nexty = qmaze.front().second;
    qmaze.pop();
    for (int i = 0; i < 4; i++)
    {
      int nnx = nextx + xf[i];
      int nny = nexty + yf[i];
      if ((0 <= nnx && nnx < a) && (0 <= nny && nny < b) && !vis[nnx][nny] && maze[nnx][nny])
      {
        vis[nnx][nny] = 1;
        qmaze.push({nnx, nny});
        loc[nnx][nny] = loc[nextx][nexty] + 1;
      }
    }
  }
}

int main(void)
{
  cin >> a >> b;
  for (int i = 0; i < a; i++)
  {
    for (int j = 0; j < b; j++)
    {
      char str;
      cin >> str;
      maze[i][j] = str - '0';
    }
  }
  bfs(0, 0);
  cout << loc[a - 1][b - 1] << "\n";
  return 0;
}

// 이런 건 익숙하지 않아서 티스토리 블로그 코드를 일부 참고하였다.
// 언젠가는 내것이 될 수 있기를...