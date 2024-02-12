#include <algorithm>
#include <iostream>
#include <vector>
using namespace std;

int a, b, c, t;
int ndcnt = 0;
int ans;

vector<int> g[101];
int vis[101];

void dfs(int x) {
  vis[x] = 1;
  if (x == c) {
    ans = ndcnt;
    return;
  }
  ndcnt++;
  for (int i = 0; i < g[x].size(); i++) {
    int y = g[x][i];
    if (!vis[y]) {
      dfs(y);
    }
  }
  ndcnt--;
}

int main(void) {
  cin.tie(0)->sync_with_stdio(0);
  cin >> a;
  cin >> b >> c;
  cin >> t;
  while (t--) {
    int x, y;
    cin >> x >> y;
    g[x].push_back(y);
    g[y].push_back(x);
  } //* 무방향 그래프
  for (int i = 1; i <= a; i++) {
    sort(g[i].begin(), g[i].end());
  } // DFS를 위한 인접 리스트 정렬
  dfs(b);
  if (vis[c]) {
    cout << ans << "\n";
    return 0;
  } else {
    cout << -1 << "\n";
    return 0;
  }
}