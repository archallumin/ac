#include <iostream>
#include <vector>
using namespace std;

int main(void) {
  cin.tie(0)->sync_with_stdio(0);
  vector<int> d;
  int a, b;
  cin >> a >> b;
  for (int i = 1; i <= a; i++) {
    if (a % i == 0)
      d.push_back(i);
  }
  if (d.size() < b)
    cout << "0\n";
  else
    cout << d[b - 1] << "\n";
  return 0;
}