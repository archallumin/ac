#include <iostream>
using namespace std;

char arr[101][101];
int arrvis[101][101] = {
    0,
};

int a;
int X[4] = {-1, 1, 0, 0};
int Y[4] = {0, 0, 1, -1};

void dfs(int x, int y) {
  arrvis[x][y] = 1;
  for (int i = 0; i < 4; i++) {
    int nx = x + X[i];
    int ny = y + Y[i];
    if (nx < 0 || ny < 0 || nx >= a || ny >= a || arrvis[nx][ny] ||
        arr[nx][ny] != arr[x][y])
      continue;
    dfs(nx, ny);
  }
}

int main(void) {
  cin.tie(0)->sync_with_stdio(0);
  int cnt = 0, r_gcnt = 0;
  cin >> a;
  for (int i = 0; i < a; i++) {
    for (int j = 0; j < a; j++) {
      cin >> arr[i][j];
    }
  }
  for (int i = 0; i < a; i++) {
    for (int j = 0; j < a; j++) {
      if (!arrvis[i][j]) {
        dfs(i, j);
        cnt++;
      }
    }
  }
  for (int i = 0; i < a; i++) {
    for (int j = 0; j < a; j++) {
      arrvis[i][j] = 0;
    }
  }
  for (int i = 0; i < a; i++) {
    for (int j = 0; j < a; j++) {
      if (arr[i][j] == 'R')
        arr[i][j] = 'G';
    }
  }
  for (int i = 0; i < a; i++) {
    for (int j = 0; j < a; j++) {
      if (!arrvis[i][j]) {
        dfs(i, j);
        r_gcnt++;
      }
    }
  }
  cout << cnt << " " << r_gcnt << '\n';
  return 0;
}