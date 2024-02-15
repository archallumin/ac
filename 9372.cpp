// 정점 - 1 출력

#include <iostream>
using namespace std;

int main(void) {
  cin.tie(0)->sync_with_stdio(0);
  int t;
  cin >> t;
  while (t--) {
    int a, b;
    cin >> a >> b;
    for (int i = 0; i < b; i++) {
      int c, d;
      cin >> c >> d;
    }
    cout << a - 1 << "\n";
  }
  return 0;
}