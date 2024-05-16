#include <algorithm>
#include <iostream>
#include <vector>
using namespace std;

int a, b;
int house_count;
int house_house_count;
int arr[101][101];
int vis[101][101];
vector<int> houses;

int X[4] = {0, 0, 1, -1};
int Y[4] = {1, -1, 0, 0};

void dfs(int y, int x) {
  for (int i = 0; i < 4; i++) {
    int xx = x + X[i];
    int yy = y + Y[i];
    if (xx < 0 || yy < 0 || xx >= a || yy >= b)
      continue;
    if (!vis[yy][xx] && arr[yy][xx]) {
      vis[yy][xx] = 1;
      house_house_count++;
      dfs(yy, xx);
    }
  }
}

int main(void) {
  int house_count = 0, c;
  for (int i = 0; i < 101; i++) {
    for (int j = 0; j < 101; j++) {
      arr[i][j] = 1;
    }
  }
  cin >> a >> b >> c;
  while (c--) {
    int a, b, c, d;
    cin >> a >> b >> c >> d;
    for (int i = a; i < c; i++) {
      for (int j = b; j < d; j++) {
        arr[i][j] = 0;
      }
    }
  }
  for (int k = 0; k < a; k++) {
    for (int l = 0; l < b; l++) {
      if (arr[k][l] && !vis[k][l]) {
        vis[k][l] = 1;
        house_house_count = 1;
        dfs(k, l);
        houses.push_back(house_house_count);
        house_count++;
      }
    }
  }
  sort(houses.begin(), houses.end());
  cout << house_count << "\n";
  for (int i = 0; i < houses.size(); i++) {
    cout << houses[i] << "\n";
  }
  return 0;
}