// 그래프를 더 연습해야겠다!

#include <iostream>
using namespace std;

int a, b, c;

int f[51][51];
bool isvisited[51][51];

int search_x[4] = {0, 0, 1, -1};
int search_y[4] = {1, -1, 0, 0};

int dfs(int y, int x)
{
  if (isvisited[y][x])
    return 0;
  isvisited[y][x] = true;
  for (int i = 0; i < 4; i++)
  {
    int xx = x + search_x[i];
    int yy = y + search_y[i];
    if (xx >= 0 && yy >= 0 && xx < a && yy < b && f[yy][xx])
      dfs(yy, xx);
  }
  return 1;
}

int main(void)
{
  cin.tie(0);
  ios::sync_with_stdio(false);
  int t;
  cin >> t;
  while (t--)
  {
    cin >> a >> b >> c;
    memset(f, 0, sizeof(f));
    memset(isvisited, 0, sizeof(isvisited));
    for (int i = 0; i < c; i++)
    {
      int x, y;
      cin >> x >> y;
      f[y][x] = 1;
    }
    int cnt = 0;
    for (int j = 0; j < b; j++)
    {
      for (int k = 0; k < a; k++)
      {
        if (f[j][k] && !isvisited[j][k])
        {
          if (dfs(j, k))
            cnt++;
        }
      }
    }
    cout << cnt << "\n";
  }
  return 0;
}