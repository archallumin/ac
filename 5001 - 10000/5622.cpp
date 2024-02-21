#include <iostream>
using namespace std;

int main(void) {
  /* ABC 2
     DEF 3
     GHI 4
     JKL 5
     MNO 6
     PQRS 7
     TUV 8
     WXYZ 9...
     규칙을 찾아서 카운팅하는 게 낫겠다! */
  string dial;
  int count = 0;
  cin >> dial;
  for (int i = 0; i < dial.length();
       i++) { // 다이얼의 문자 수만큼 카운팅을 해서 값을 더한다...
    // 다이얼을 2로 맞추는 데 걸리는 시간은 3초... 3-4, 4-5, ...
    // 수를 더하는 식으로 구성하자.
    if (dial[i] == 'A' || dial[i] == 'B' || dial[i] == 'C')
      count = count + 3;
    else if (dial[i] == 'D' || dial[i] == 'E' || dial[i] == 'F')
      count = count + 4;
    else if (dial[i] == 'G' || dial[i] == 'H' || dial[i] == 'I')
      count = count + 5;
    else if (dial[i] == 'J' || dial[i] == 'K' || dial[i] == 'L')
      count = count + 6;
    else if (dial[i] == 'M' || dial[i] == 'N' || dial[i] == 'O')
      count = count + 7;
    else if (dial[i] == 'P' || dial[i] == 'Q' || dial[i] == 'R' ||
             dial[i] == 'S')
      count = count + 8;
    else if (dial[i] == 'T' || dial[i] == 'U' || dial[i] == 'V')
      count = count + 9;
    else if (dial[i] == 'W' || dial[i] == 'X' || dial[i] == 'Y' ||
             dial[i] == 'Z')
      count = count + 10;
    // 이건 너무 무식한 방법이었나??
  }
  cout << count << "\n";
  return 0;
}