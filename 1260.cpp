#include <iostream>
#include <vector>
#include <queue>
using namespace std;

vector<int> graph[1001];
bool isvisited[1001];

void dfs(int x)
{
  isvisited[x] = true;
  cout << x << " ";
  for (int i = 0; i < graph[x].size(); i++)
  {
    int y = graph[x][i];
    if (!isvisited[y])
      dfs(y);
  }
}

void bfs(int x)
{
  queue<int> qgraph;
  qgraph.push(x);
  isvisited[x] = true;
  while (!qgraph.empty())
  {
    int a = qgraph.front();
    qgraph.pop();
    cout << a << " ";
    for (int i = 0; i < graph[a].size(); i++)
    {
      int b = graph[a][i];
      if (!isvisited[b])
      {
        qgraph.push(b);
        isvisited[b] = true;
      }
    }
  }
}

void resetHistory()
{
  for (int i = 1; i <= 1000; i++)
  {
    isvisited[i] = false;
  }
}

int main(void)
{
  cin.tie(0);
  ios::sync_with_stdio(false);
  int a, b, c;
  cin >> a >> b >> c;
  for (int i = 0; i < b; i++)
  {
    int x, y;
    cin >> x >> y;
    graph[x].push_back(y);
    graph[y].push_back(x);
  }
  for (int i = 1; i <= a; i++)
  {
    sort(graph[i].begin(), graph[i].end());
  }
  // 연결 리스트를 정렬해 줘야 제대로 탐색할 수 있다..
  dfs(c);
  cout << "\n";
  resetHistory();
  bfs(c);
  cout << "\n";
  return 0;
}