// 예시 코드가 있어 쉽게 풀 수 있을 것이다...

#include <iostream>
using namespace std;

int main(void) {
  int resp;
  int a, b;
  for (int i = 1; i <= 9; i++) {
    cout << "? A " << i << endl;
    cin >> resp;
    if (resp == 1) {
      a = i;
      break;
    }
  }
  resp = 0;
  for (int j = 1; j <= 9; j++) {
    cout << "? B " << j << endl;
    cin >> resp;
    if (resp == 1) {
      b = j;
      break;
    }
  }
  cout << "! " << a + b << "\n";
  return 0;
}