#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int a, b;
vector<string> res;
string arr[500000];

void binary(string x)
{
  int l = 0;
  int h = a - 1;
  int mid;
  while (l <= h)
  {
    mid = (l + h) / 2;
    if (arr[mid] == x)
    {
      res.push_back(arr[mid]);
      break;
    }
    else if (arr[mid] < x)
    {
      l = mid + 1;
    }
    else if (arr[mid] > x)
    {
      h = mid - 1;
    }
  }
}

int main(void)
{
  cin.tie(0);
  ios::sync_with_stdio(false);
  cin >> a >> b;
  for (int i = 0; i < a; i++)
  {
    cin >> arr[i];
  }
  sort(arr, arr + a);
  for (int j = 0; j < b; j++)
  {
    string check;
    cin >> check;
    binary(check);
  }
  sort(res.begin(), res.end());
  cout << res.size() << "\n";
  for (string name : res)
    cout << name << "\n";
  return 0;
}