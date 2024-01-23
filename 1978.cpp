#include <iostream>
#define fastio cin.tie(0)->sync_with_stdio(0);
using namespace std;

bool isPrime(int n)
{
  if (n < 2)
    return 0;
  for (int i = 2; i * i <= n; i++)
  {
    if (n % i == 0)
      return 0;
  }
  return 1;
}

int main(void)
{
  fastio;
  int arr[101];
  int a, cnt = 0;
  cin >> a;
  for (int i = 0; i < a; i++)
  {
    cin >> arr[i];
  }
  for (int i = 0; i < a; i++)
  {
    if (isPrime(arr[i]))
    {
      cnt++;
    }
  }
  cout << cnt << "\n";
  return 0;
}