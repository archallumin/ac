#include <iostream>
#include <map>
using namespace std;

int main(void)
{
  cin.tie(0);
  ios::sync_with_stdio(false);
  map<string, string, greater<>> mp;
  int t;
  cin >> t;
  while (t--)
  {
    string a, b;
    cin >> a >> b;
    mp[a] = b;
  }
  map<string, string>::iterator iter;
  for (iter = mp.begin(); iter != mp.end(); iter++)
  {
    if (iter->second == "enter")
    {
      cout << iter->first << "\n";
    }
  }
  return 0;
}