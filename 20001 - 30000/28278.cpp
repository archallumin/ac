#include <bits/stdc++.h>
using namespace std;

int main(void)
{
  cin.tie(NULL);
  ios::sync_with_stdio(false);
  stack<int> arr;
  int t;
  cin >> t;
  while (t--)
  {
    string a;
    int b;
    cin >> a;
    if (a == "1")
    {
      cin >> b;
      arr.push(b);
    }
    if (a == "2")
    {
      if (arr.empty())
      {
        cout << "-1\n";
      }
      else
      {
        cout << arr.top() << "\n";
        arr.pop();
      }
    }
    if (a == "3")
    {
      cout << arr.size() << "\n";
    }
    if (a == "4")
    {
      cout << arr.empty() << "\n";
    }
    if (a == "5")
    {
      if (arr.empty())
      {
        cout << "-1\n";
      }
      else
      {
        cout << arr.top() << "\n";
      }
    }
  }
  return 0;
}