#include <algorithm>
#include <iostream>
#include <vector>
using namespace std;

int a;
int house_count;
int house_house_count;
int arr[26][26];
int vis[26][26];
vector<int> houses;

int X[4] = {0, 0, 1, -1};
int Y[4] = {1, -1, 0, 0};

void dfs(int y, int x)
{
  for (int i = 0; i < 4; i++)
  {
    int xx = x + X[i];
    int yy = y + Y[i];
    if (xx < 0 || yy < 0 || xx >= a || yy >= a)
      continue;
    if (!vis[yy][xx] && arr[yy][xx])
    {
      vis[yy][xx] = 1;
      house_house_count++;
      dfs(yy, xx);
    }
  }
}

int main(void)
{
  int house_count = 0;
  cin >> a;
  for (int i = 0; i < a; i++)
  {
    for (int j = 0; j < a; j++)
    {
      char str;
      cin >> str;
      arr[i][j] = str - '0';
    }
  }
  for (int k = 0; k < a; k++)
  {
    for (int l = 0; l < a; l++)
    {
      if (arr[k][l] && !vis[k][l])
      {
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
  for (int i = 0; i < houses.size(); i++)
  {
    cout << houses[i] << "\n";
  }
  return 0;
}