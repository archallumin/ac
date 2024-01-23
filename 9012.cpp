#include <iostream>
#include <stack>
using namespace std;

int VPS(string a)
{
  stack<string> arr;
  for (int i = 0; i < a.length(); i++)
  {
    if (a[i] == '(')
    {
      arr.push("(");
    }
    else
    {
      if (!arr.empty())
      {
        arr.pop();
      }
      else
      {
        return 0;
      }
    }
  }
  return arr.empty();
}

int main(void)
{
  cin.tie(0);
  ios::sync_with_stdio(false);
  int t;
  string a;
  cin >> t;
  while (t--)
  {
    cin >> a;
    if (VPS(a))
      cout << "YES\n";
    else
      cout << "NO\n";
  }
  return 0;
}