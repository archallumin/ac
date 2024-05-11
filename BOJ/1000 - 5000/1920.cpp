#include <algorithm>
#include <iostream>
using namespace std;

int arr[100000];
int a, b;

int binary(int x)
{
  int l = 0;
  int h = a - 1;
  int index;
  // 이분 탐색
  while (l <= h)
  {
    index = (l + h) / 2;
    if (arr[index] == x)
    {
      return 1;
    }
    else if (arr[index] < x)
    {
      l = index + 1;
    }
    else if (arr[index] > x)
    {
      h = index - 1;
    }
  }
  return 0;
}

int main(void)
{
  cin.tie(0);
  cout.tie(0);
  ios::sync_with_stdio(false);
  cin >> a;
  for (int i = 0; i < a; i++)
  {
    cin >> arr[i];
  }
  sort(arr, arr + a);
  cin >> b;
  for (int j = 0; j < b; j++)
  {
    int c;
    cin >> c;
    cout << binary(c) << "\n";
  }
  return 0;
}