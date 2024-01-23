#include <algorithm>
#include <iostream>
#include <vector>

using namespace std;

vector<int> graph[1001];
bool isvisited[1001];
int cnt = 0;

void dfs(int x) {
  isvisited[x] = true;
  for (int i = 0; i < graph[x].size(); i++) {
    int y = graph[x][i];
    if (!isvisited[y]) {
      dfs(y);
    }
  }
}

int main(void) {
  int a, b;
  cin >> a >> b;
  while (b--) {
    int x, y;
    cin >> x >> y;
    graph[x].push_back(y);
    graph[y].push_back(x);
    // 무방향 그래프 push_back
  }
  for (int j = 1; j < a; j++) {
    sort(graph[j].begin(), graph[j].end());
  }
  for (int i = 1; i <= a; i++) {
    if (!isvisited[i]) {
      cnt++;
      dfs(i);
    }
  }
  cout << cnt << "\n";
  return 0;
}