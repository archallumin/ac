#include <iostream>
#include <stack>
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
    if (a == "push")
    {
      cin >> b;
      arr.push(b);
    }
    if (a == "pop")
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
    if (a == "size")
    {
      cout << arr.size() << "\n";
    }
    if (a == "empty")
    {
      cout << arr.empty() << "\n";
    }
    if (a == "top")
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