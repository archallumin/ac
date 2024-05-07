#include <iostream>
using namespace std;

int main(void) {
  string name, b;
  double a;
  double study_count = 0.0;
  double abcd = 0.0;
  double total = 0.0;
  for (int i = 0; i < 20; i++) { // 20줄에 걸쳐 입력해야 되니까...
    cin >> name >> a >> b;
    if (b == "P")
      continue; // P일 경우 계산하지 않는다.
    study_count += a;
    if (b == "F")
      continue; // F일 경우 건너뛴다.
    if (b[0] == 'A')
      abcd = 4;
    else if (b[0] == 'B')
      abcd = 3;
    else if (b[0] == 'C')
      abcd = 2;
    else if (b[0] == 'D')
      abcd = 1;
    if (b[1] == '+')
      abcd += 0.5;
    else
      abcd += 0;
    // 과목에 따라 점수를 더한다!
    total += a * abcd;
  }
  cout.precision(6);
  cout << fixed << total / study_count << "\n";
}