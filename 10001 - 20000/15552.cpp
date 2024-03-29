#include <iostream>
using namespace std;

int main(void) {
  cin.tie(NULL);
  ios::sync_with_stdio(false);
  // ���� printf, scanf �� �����ϱ� ����!!
  int a, b, t;
  cin >> t;
  for (int x = 0; x < t; x++) {
    cin >> a >> b;
    cout << a + b << "\n";
  }
  return 0;
}