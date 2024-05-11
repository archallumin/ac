#include <iostream>
#include <queue>
#include <tuple>
using namespace std;

int a, b, c;
int tom[101][101][101];
int vis[101][101][101];
int day[101][101][101];

int xs[6] = {1, -1, 0, 0, 0, 0};
int ys[6] = {0, 0, 1, -1, 0, 0};
int zs[6] = {0, 0, 0, 0, 1, -1};

int total_days = -1;

queue<tuple<int, int, int>> qtom;

/** 알고리즘 설명
 * 우선은 bfs 여러개를 돌려서 날수가 가장 많은 것을 검사해 그걸 출력하고,
 * bfs를 전부 돈 뒤에 배열 전체를 순회해서 안 익은 게 있다면 -1 출력
 */

int main(void) {
  cin.tie(0);
  ios::sync_with_stdio(false);
  cin >> a >> b >> c;
  for (int i = 0; i < c; i++) {
    for (int j = 0; j < b; j++) {
      for (int k = 0; k < a; k++) {
        cin >> tom[i][j][k];
        vis[i][j][k] = 0;
        if (tom[i][j][k] == 1) {
          qtom.push({i, j, k});
          vis[i][j][k] = 1;
          day[i][j][k] = 1;
        }
      }
    }
  }
  while (!qtom.empty()) {
    int nx = get<0>(qtom.front());
    int ny = get<1>(qtom.front());
    int nz = get<2>(qtom.front());
    qtom.pop();
    for (int i = 0; i < 6; i++) {
      int fdx = nx + xs[i];
      int fdy = ny + ys[i];
      int fdz = nz + zs[i];
      if (fdx >= 0 && fdy >= 0 && fdz >= 0 && c > fdx && b > fdy && a > fdz &&
          !vis[fdx][fdy][fdz] && tom[fdx][fdy][fdz] == 0) {
        qtom.push({fdx, fdy, fdz});
        vis[fdx][fdy][fdz] = 1;
        tom[fdx][fdy][fdz] = 2;
        day[fdx][fdy][fdz] = day[nx][ny][nz] + 1;
      }
    }
  }
  for (int i = 0; i < c; i++) {
    for (int j = 0; j < b; j++) {
      for (int k = 0; k < a; k++) {
        if (day[i][j][k] >= total_days)
          total_days = day[i][j][k];
      }
    }
  }
  for (int i = 0; i < c; i++) {
    for (int j = 0; j < b; j++) {
      for (int k = 0; k < a; k++) {
        if (tom[i][j][k] == 0 && !vis[i][j][k]) {
          cout << "-1\n";
          return 0;
        }
      }
    }
  }
  cout << total_days - 1 << "\n";
  return 0;
}