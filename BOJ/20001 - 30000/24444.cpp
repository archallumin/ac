#include <algorithm>
#include <iostream>
#include <queue>
using namespace std;

vector<int> graph[100001];
bool isvisited[100001];
int visitcount[100001];
int cnt = 0;

void bfs(int x) {
  queue<int> qgraph;
  qgraph.push(x);
  isvisited[x] = true;
  cnt++;
  visitcount[x] = cnt;
  while (!qgraph.empty()) {
    int tmp = qgraph.front();
    qgraph.pop();
    for (int i = 0; i < graph[tmp].size(); i++) {
      int a = graph[tmp][i];
      if (!isvisited[a]) {
        cnt++;
        visitcount[a] = cnt;
        qgraph.push(a);
        isvisited[a] = true;
      }
    }
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
    sort(graph[i].begin(), graph[i].end());
  }
  bfs(c);
  for (int i = 1; i <= a; i++) {
    cout << visitcount[i] << "\n";
  }
  return 0;
}