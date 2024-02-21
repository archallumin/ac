#include <iostream>
using namespace std;

int main(void) {
  int problem = 0;
  string a, b;
  cin >> a;
  while (b != "고무오리 디버깅 끝") {
    cin >> b;
    if (b == "문제") {
      problem++;
    }
    if (b == "고무오리") {
      if (problem == 0) {
        problem += 2;
      } else
        problem--;
    }
  }
  if (problem)
    cout << "고무오리야 사랑해\n";
  else
    cout << "힝구\n";
  return 0;
}
// why?????