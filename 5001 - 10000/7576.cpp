#include <iostream>
#include <queue>
using namespace std;

int a, b, x, y;
int tom[1001][1001];
int vis[1001][1001];
int day[1001][1001];

int xs[4] = {1, -1, 0, 0};
int ys[4] = {0, 0, 1, -1};

int total_days = -1;

queue<pair<int, int>> qtom;

/** 알고리즘 설명
 * 우선은 bfs 여러개를 돌려서 날수가 가장 많은 것을 검사해 그걸 출력하고,
 * bfs를 전부 돈 뒤에 배열 전체를 순회해서 안 익은 게 있다면 -1 출력
 */

int main(void) {
  cin.tie(0);
  ios::sync_with_stdio(false);
  cin >> a >> b;
  for (int i = 0; i < b; i++) {
    for (int j = 0; j < a; j++) {
      cin >> tom[i][j];
      vis[i][j] = 0;
      if (tom[i][j] == 1) {
        qtom.push({i, j});
        vis[i][j] = 1;
        day[i][j] = 1;
      }
    }
  }
  while (!qtom.empty()) {
    int nx = qtom.front().first;
    int ny = qtom.front().second;
    qtom.pop();
    for (int i = 0; i < 4; i++) {
      int fdx = nx + xs[i];
      int fdy = ny + ys[i];
      if (fdx >= 0 && fdy >= 0 && b > fdx && a > fdy && !vis[fdx][fdy] &&
          tom[fdx][fdy] == 0) {
        qtom.push({fdx, fdy});
        vis[fdx][fdy] = 1;
        tom[fdx][fdy] = 2;
        day[fdx][fdy] = day[nx][ny] + 1;
      }
    }
  }
  for (int i = 0; i < b; i++) {
    for (int j = 0; j < a; j++) {
      if (day[i][j] >= total_days)
        total_days = day[i][j];
    }
  }
  for (int i = 0; i < b; i++) {
    for (int j = 0; j < a; j++) {
      if (tom[i][j] == 0 && !vis[i][j]) {
        cout << "-1\n";
        return 0;
      }
    }
  }
  cout << total_days - 1 << "\n";
  return 0;
}