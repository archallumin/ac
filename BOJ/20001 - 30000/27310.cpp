#include <iostream>
using namespace std;

int main(void) {
  string a;
  int cnt = 0;
  cin >> a;
  for (int i = 0; i < a.length(); i++) {
    if (a.find('_') == string::npos)
      break;
    else if (a.find('_', i) <= i) // 언더바의 개수를 카운팅한다.
      cnt++;
  }
  cout << a.length() + 2 + (cnt * 5) << "\n";
  return 0;
}