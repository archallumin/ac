// 하스켈쓰고싶다

#include <iostream>
using namespace std;

int main(void)
{
  cin.tie(NULL);
  cout.tie(NULL);
  ios::sync_with_stdio(false);
  int a;
  cin >> a;
  for (int i = 1; i <= a; i++)
  {
    int x = i;
    int tot = i;
    while (x > 0)
    {
      tot = tot + x % 10;
      x /= 10;
    }
    if (tot == a)
    {
      cout << i;
      break;
    }
    if (i == a)
    {
      cout << "0";
      break;
    }
  }
  cout << "\n";
  return 0;
}