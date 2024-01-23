#include <iostream>
#include <stack>
using namespace std;

int main(void)
{
  cin.tie(0);
  ios::sync_with_stdio(false);
  stack<int> arr;
  int count = 0;
  int t, a;
  cin >> t;
  for (int i = 0; i < t; i++)
  {
    cin >> a;
    if (a == 0)
    {
      if (!arr.empty())
      {
        arr.pop();
      }
    }
    else
    {
      arr.push(a);
    }
  }
  while (!arr.empty())
  {
    count += arr.top();
    arr.pop();
  }
  cout << count << "\n";
  return 0;
}