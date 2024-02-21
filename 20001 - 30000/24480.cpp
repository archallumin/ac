#include <algorithm>
#include <iostream>
#include <vector>
using namespace std;

vector<int> graph[100001];
bool isvisited[100001];
int visitcount[100001];
int _count = 0;

void dfs(int x) {
  isvisited[x] = true;
  _count++;
  visitcount[x] = _count;
  for (int i = 0; i < graph[x].size(); i++) {
    int y = graph[x][i];
    if (!isvisited[y])
      dfs(y);
  }
}

int main(void) {
  cin.tie(0);
  ios::sync_with_stdio(false);
  int a, b, c;
  cin >> a >> b >> c;
  for (int i = 1; i <= b; i++) {
    int x, y;
    cin >> x >> y;
    graph[x].push_back(y);
    graph[y].push_back(x);
  }
  for (int i = 1; i <= a; i++) {
    sort(graph[i].begin(), graph[i].end(), greater<>());
  }
  dfs(c);
  for (int i = 1; i <= a; i++) {
    cout << visitcount[i] << "\n";
  }
  return 0;
}