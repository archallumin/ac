#include <algorithm>
#include <iostream>
#include <vector>
using namespace std;

vector<int> graph[101];
bool isvisited[101];

void dfs(int x)
{
  // DFS 이용
  isvisited[x] = true;
  for (int i = 0; i < graph[x].size(); i++)
  {
    int y = graph[x][i];
    if (!isvisited[y])
      dfs(y);
  }
}

int main(void)
{
  cin.tie(0);
  ios::sync_with_stdio(false);
  int a, b;
  int cnt = 0;
  cin >> a;
  cin >> b;
  for (int i = 0; i < b; i++)
  {
    int x, y;
    cin >> x >> y;
    graph[x].push_back(y);
    graph[y].push_back(x);
  }
  // 무방향 그래프 push_back
  for (int i = 1; i <= a; i++)
  {
    sort(graph[a].begin(), graph[a].end());
  }
  // DFS에 용이한 정렬 작업 수행
  dfs(1);
  for (int i = 1; i <= a; i++)
  {
    if (isvisited[i]) // 방문되었을 경우 카운트 증가
      cnt++;
  }
  cout << cnt - 1 << "\n";
  /**
   * ? 왜 cnt - 1 을 하나요?
   * ! 1번 컴퓨터를 "통해" 걸리게 되는 수를 세는 것이니 1번 컴퓨터를 합해서 세면 안 됨!
  */
  return 0;
}