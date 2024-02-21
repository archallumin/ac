#include <iostream>
using namespace std;

int main(void)
{
  long long num;
  long long res = 0;
  cin >> num;
  for (long long i = 0; i < num; i++)
  {
    res += (num + 1) * i;
  }
  cout << res << "\n";
  return 0;
}