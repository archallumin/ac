#include <iostream>
using namespace std;

int main(void) {
  int t = 0;
  int t_1;
  cin >> t_1;
  while (t < t_1) {
    int a, b;
    cin >> a >> b;
    cout << a + b << "\n";
    t++;
  }
  return 0;
}