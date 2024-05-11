#include <iostream>
#include <queue>
using namespace std;

int vis[100'001];

int main(void)
{
  int a, b;
  cin >> a >> b;
  queue<pair<int, int>> q;
  q.push({a, 0});
  while (!q.empty())
  {
    int x = q.front().first;
    int p = q.front().second;
    q.pop();
    if (x == b)
    {
      cout << p << "\n";
      break;
    }
    if (x + 1 < 100'001 && !vis[x + 1])
    {
      vis[x + 1] = 1;
      q.push({x + 1, p + 1});
    }
    if (x * 2 < 100'001 && !vis[x * 2])
    {
      vis[x * 2] = 1;
      q.push({x * 2, p + 1});
    }
    if (x - 1 < 100'001 && !vis[x - 1])
    {
      vis[x - 1] = 1;
      q.push({x - 1, p + 1});
    }
  }
  return 0;
}