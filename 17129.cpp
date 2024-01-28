#include <iostream>
#include <queue>
using namespace std;

int a, b, x, y;
char island[3001][3001];
int food[3001][3001];
int vis[3001][3001];
int dist[3001][3001];

int xs[4] = {1, -1, 0, 0};
int ys[4] = {0, 0, 1, -1};

long long total = 10000000000; // 매우큰값 선언
int foodcount = 3;

queue<pair<int, int>> isle;

int main(void) {
  cin.tie(0)->sync_with_stdio(0);
  cin >> a >> b;
  for (int i = 0; i < b; i++) {
    for (int j = 0; j < a; j++) {
      char str;
      cin >> str;
      if (str == '3' || str == '4' || str == '5')
        food[i][j] = 1;
      island[i][j] = str;
      vis[i][j] = 0;
      if (island[i][j] == '2') {
        isle.push({i, j});
        vis[i][j] = 1;
        dist[i][j] = 1;
      }
    }
  }
  while (!isle.empty()) {
    int nx = isle.front().first;
    int ny = isle.front().second;
    isle.pop();
    for (int i = 0; i < 4; i++) {
      int fdx = nx + xs[i];
      int fdy = ny + ys[i];
      if (fdx >= 0 && fdy >= 0 && b > fdx && a > fdy && !vis[fdx][fdy] &&
          island[fdx][fdy] != '1') {
        isle.push({fdx, fdy});
        vis[fdx][fdy] = 1;
        island[fdx][fdy] = 'X';
        dist[fdx][fdy] = dist[nx][ny] + 1;
      }
    }
  }
  for (int i = 0; i < b; i++) {
    for (int j = 0; j < a; j++) {
      if (food[i][j] == 1 && vis[i][j] && dist[i][j] <= total)
        total = dist[i][j];
    }
  }
  for (int i = 0; i < b; i++) {
    for (int j = 0; j < a; j++) {
      if (food[i][j] == 1 && !vis[i][j]) {
        foodcount--;
      }
    }
  }
  if (foodcount == 0)
    cout << "NIE\n";
  else
    cout << "TAK\n" << total - 1 << "\n";
  return 0;
}