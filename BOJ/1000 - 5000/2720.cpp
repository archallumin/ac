#include <iostream>
using namespace std;

int main(void)
{
  cin.tie(0)->sync_with_stdio(0);
  int t;
  cin >> t;
  while (t--)
  {
    int q = 0, d = 0, n = 0, p = 0;
    int a;
    cin >> a;
    while (a > 0)
    {
      if (a - 25 >= 0)
      {
        a -= 25;
        q++;
      }
      else
      {
        if (a - 10 >= 0)
        {
          a -= 10;
          d++;
        }
        else
        {
          if (a - 5 >= 0)
          {
            a -= 5;
            n++;
          }
          else
          {
            if (a - 1 >= 0)
            {
              a -= 1;
              p++;
            }
          }
        }
      }
    }
    cout << q << " " << d << " " << n << " " << p << "\n";
  }
  return 0;
}