#include <algorithm>
#include <iostream>
using namespace std;

struct people
{
  int a;
  string b;
};

bool operator<(const people &left, const people &right)
{
  return left.a < right.a;
}

people arr[100001];

int main(void)
{
  cin.tie(NULL);
  cout.tie(NULL);
  ios::sync_with_stdio(false);
  int a;
  cin >> a;
  for (int i = 0; i < a; i++)
  {
    cin >> arr[i].a >> arr[i].b;
  }
  stable_sort(arr, arr + a);
  for (int j = 0; j < a; j++)
  {
    cout << arr[j].a << " " << arr[j].b << "\n";
  }
  return 0;
}