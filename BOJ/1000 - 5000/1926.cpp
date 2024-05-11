#include <algorithm>
#include <iostream>
#include <vector>
using namespace std;

int a, b;
int tp;
int ttp;
int pic[511][511];
int vis[511][511];
vector<int> ps;

int X[4] = {0, 0, 1, -1};
int Y[4] = {1, -1, 0, 0};

void dfs(int y, int x) {
  for (int i = 0; i < 4; i++) {
    int xx = x + X[i];
    int yy = y + Y[i];
    if (xx < 0 || yy < 0 || xx >= b || yy >= a)
      continue;
    if (!vis[yy][xx] && pic[yy][xx]) {
      vis[yy][xx] = 1;
      ttp++;
      dfs(yy, xx);
    }
  }
}

int main(void) {
  cin.tie(0);
  ios::sync_with_stdio(false);
  int tp = 0;
  cin >> a >> b;
  for (int i = 0; i < a; i++) {
    for (int j = 0; j < b; j++) {
      cin >> pic[i][j];
    }
  }
  for (int k = 0; k < a; k++) {
    for (int l = 0; l < b; l++) {
      if (pic[k][l] == 1 && !vis[k][l]) {
        vis[k][l] = 1;
        ttp = 1;
        dfs(k, l);
        ps.push_back(ttp);
        tp++;
      }
    }
  }
  cout << tp << "\n";
  if (ps.size() == 0) {
    cout << "0\n";
    return 0;
  } else {
    sort(ps.begin(), ps.end(), greater<int>());
    cout << ps[0] << "\n";
    return 0;
  }
}