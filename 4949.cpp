#include <iostream>
#include <stack>
#include <string>
using namespace std;

int VPS_upgraded(string a)
{
  stack<string> arr;
  for (int i = 0; i < a.length(); i++)
  {
    if (a[i] == '(')
    {
      arr.push("(");
    }
    if (a[i] == '[')
    {
      arr.push("[");
    }
    if (a[i] == ')')
    {
      if (arr.empty())
      {
        return 0;
      }
      else if (arr.top() == "[")
      {
        return 0;
      }
      else if (arr.top() == "(")
      {
        arr.pop();
      }
    }
    if (a[i] == ']')
    {
      if (arr.empty())
      {
        return 0;
      }
      else if (arr.top() == "(")
      {
        return 0;
      }
      else if (arr.top() == "[")
      {
        arr.pop();
      }
    }
  }
  return (arr.empty());
}

int main(void)
{
  cin.tie(0);
  ios::sync_with_stdio(false);
  string a;
  while (1)
  {
    getline(cin, a);
    if (a == ".")
      break;
    else if (VPS_upgraded(a))
      cout << "yes\n";
    else
      cout << "no\n";
  }
  return 0;
}