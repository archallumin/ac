#include <algorithm>
#include <iostream>
#include <map>
#include <vector>
using namespace std;

int a[500001], b[500001];
map<int, int> arr;

int main(void)
{
  cin.tie(NULL);
  cout.tie(NULL);
  ios::sync_with_stdio(false);
  vector<int> minus;
  int x, y;
  cin >> x >> y;
  for (int i = 0; i < x; i++)
  {
    cin >> a[i];
  }
  for (int j = 0; j < y; j++)
  {
    cin >> b[j];
  }
  for (int i = 0; i < y; i++)
  {
    arr[b[i]]++;
  }
  for (int j = 0; j < x; j++)
  {
    if (!arr[a[j]])
    {
      minus.push_back(a[j]);
    }
  }
  sort(minus.begin(), minus.end());
  cout << minus.size() << "\n";
  for (auto i : minus)
  {
    cout << i << " ";
  }
  cout << "\n";
  return 0;
}