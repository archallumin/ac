#include <iostream>
using namespace std;

int main(void)
{
  int a;
  int count = 0;
  cin >> a;
  for (int i = 0; i < 32; i++)
  {
    if (a & (1 << i))
      count++;
  }
  cout << count << "\n";
}