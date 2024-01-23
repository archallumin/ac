// DP 연습

#include <iostream>
using namespace std;

long long fib[41];

int main(void)
{
  cin.tie(0);
  ios::sync_with_stdio(false);
  fib[1] = 1;
  fib[2] = 1;
  for (int i = 3; i < 41; i++)
  {
    fib[i] = fib[i - 1] + fib[i - 2];
  }
  int a;
  int t;
  cin >> t;
  while (t--)
  {
    cin >> a;
    if (a == 0)
      cout << "1 0\n";
    else
      cout << fib[a - 1] << " " << fib[a] << "\n";
  }
  return 0;
}