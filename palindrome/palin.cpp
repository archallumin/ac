// #include <algorithm>
#include <iostream>
#include <string>
using namespace std;

const string digits =
    "0123456789ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz";

int main(void) {
  int g, t;
  string a;
  cin >> t;
  while (t--) {
    string tmp1 = "";
    string tmp2 = "";
    string tmp3 = "";
    cin >> g;
    cin >> a;
    /**
     * * A.1 & A.2
     * ? 전설의 시작
     */
    if (a[1] != '0' && a[1] != '1' && a[1] != '2') {
      bool iszero = 0;
      cout << "a1 / a2"
           << " "; //! 디버그
      if (((a[a.size() - 1] - '0') - (a[0] - '0') - (a[1] - '0') + 1) % g !=
          0) {
        tmp1 += digits[a[0] - '0'];
        tmp2 += digits[a[1] - 1 - '0'];
        tmp3 +=
            digits[((a[a.size() - 1] - '0') - (a[0] - '0') - (a[1] - '0') + 1) %
                   g];
      } else if (((a[a.size() - 1] - '0') - (a[0] - '0') - (a[1] - '0') + 1) %
                     g ==
                 0) {
        iszero = 1; // bool
        tmp1 += digits[a[0] - '0'];
        tmp2 += digits[a[1] - 2 - '0'];
        tmp3 += digits[1];
      }
      for (int i = 1; i <= a.size() - 2; i++)
        tmp1 += "*";
      for (int i = 1; i <= a.size() - 3; i++)
        tmp2 += "*";
      for (int i = 1; i <= a.size() - 4; i++)
        tmp3 += "*";
      tmp1 += digits[a[0] - '0'];
      if (iszero) {
        tmp2 += digits[a[1] - 2 - '0'];
        tmp3 += digits[1];
      } else {
        tmp2 += digits[a[1] - 1 - '0'];
        tmp3 +=
            digits[((a[a.size() - 1] - '0') - (a[0] - '0') - (a[1] - '0') + 1) %
                   g];
      }
    }
    /**
     * * A.3 & A.4
     * ? 여기까진 그래도 무난하다
     * ? ㅎㅎ
     */
    else if (a[0] != '1' && (a[1] == '0' || a[1] == '1' || a[2] == '2')) {
      bool iszero = 0;
      cout << "a3 / a4"
           << " "; //! 디버그
      if (((a[a.size() - 1] - '0') - (a[0] - '0') + 2) % g != 0) {
        tmp1 += digits[a[0] - 1 - '0'];
        tmp2 += digits[g - 1];
        tmp3 += digits[((a[a.size() - 1] - '0') - (a[0] - '0') + 2) % g];
      } else if (((a[a.size() - 1] - '0') - (a[0] - '0') + 2) % g == 0) {
        iszero = 1; // bool
        tmp1 += digits[a[0] - 1 - '0'];
        tmp2 += digits[g - 2];
        tmp3 += digits[1];
      }
      for (int i = 1; i <= a.size() - 2; i++)
        tmp1 += "*";
      for (int i = 1; i <= a.size() - 3; i++)
        tmp2 += "*";
      for (int i = 1; i <= a.size() - 4; i++)
        tmp3 += "*";
      tmp1 += digits[a[0] - 1 - '0'];
      if (iszero) {
        tmp2 += digits[g - 2];
        tmp3 += digits[1];
      } else {
        tmp2 += digits[g - 1];
        tmp3 += digits[((a[a.size() - 1] - '0') - (a[0] - '0') + 2) % g];
      }
    } else if (a[0] == '1' && a[1] == '0') {
      /**
       * * A.5 && A.6
       */
      bool iszero = 0;
      cout << "a5 / a6"
           << " "; //! 디버그
      if ((a[a.size() - 1] - '0') - (a[2] - '0') % g != 0 && a[2] <= '3') {
        tmp1 += digits[g - 1];
        tmp2 += digits[a[2] - '0' + 1];
        tmp3 += digits[(a[a.size() - 1] - '0') - (a[2] - '0') % g];
      } else if ((a[a.size() - 1] - '0') - (a[2] - '0') % g == 0 &&
                 a[2] <= '2') {
        iszero = 1;
        tmp1 += digits[g - 1];
        tmp2 += digits[a[2] - '0' + 2];
        tmp3 += digits[g - 1];
      }
      for (int i = 1; i <= a.size() - 3; i++)
        tmp1 += "*";
      for (int i = 1; i <= a.size() - 4; i++)
        tmp2 += "*";
      for (int i = 1; i <= a.size() - 5; i++)
        tmp3 += "*";
      tmp1 += digits[g - 1];
      if (iszero) {
        tmp2 += digits[a[2] - '0' + 2];
        tmp3 += digits[g - 1];
      } else {
        tmp2 += digits[a[2] - '0' + 1];
        tmp3 += digits[(a[a.size() - 1] - '0') - (a[2] - '0') % g];
      }
    }
    /**
     * * B.3 & B.4
     * ? 힘내자! 22
     */
    else if (a[0] == '1' && (a[1] == '1' || a[1] == '2') &&
             a[a.size() - 1] == '0') {
      bool iszero = 0;
      cout << "b3 / b4"
           << " "; //! 디버그
      if (a[2] == '0' || a[2] == '1') {
        tmp1 += digits[1];
        tmp1 += digits[a[1] - 1 - '0'];
        tmp2 += digits[g - 2];
        tmp3 += digits[1];
      } else if (a[2] == '2' || a[2] == '3') {
        iszero = 1;
        tmp1 += digits[1];
        tmp1 += digits[a[1] - '0'];
        tmp2 += digits[1];
        tmp3 += digits[g - 2];
      }
      for (int i = 1; i <= a.size() - 4; i++)
        tmp1 += "*";
      for (int i = 1; i <= a.size() - 4; i++)
        tmp2 += "*";
      for (int i = 1; i <= a.size() - 5; i++)
        tmp3 += "*";
      if (iszero) {
        tmp1 += digits[a[1] - '0'];
        tmp1 += digits[1];
        tmp2 += digits[1];
        tmp3 += digits[g - 2];
      } else {
        tmp1 += digits[a[1] - 1 - '0'];
        tmp1 += digits[1];
        tmp2 += digits[g - 2];
        tmp3 += digits[1];
      }
    }
    /**
     * * B.5
     * ? 힘내자! 333
     */
    else if (a[0] == '1' && (a[1] == '1' || a[1] == '2') &&
             (a[2] == '0' || a[2] == '1' || a[2] == '2') &&
             a[a.size() - 1] != 0) {
      cout << "b5"
           << " "; //! 디버그
      tmp1 += digits[1];
      tmp1 += digits[a[1] - 1 - '0'];
      tmp2 += digits[g - 1];
      tmp3 += digits[a[a.size() - 1] - '0'];
      for (int i = 1; i <= a.size() - 4; i++)
        tmp1 += "*";
      for (int i = 1; i <= a.size() - 4; i++)
        tmp2 += "*";
      for (int i = 1; i <= a.size() - 5; i++)
        tmp3 += "*";
      tmp1 += digits[a[1] - 1 - '0'];
      tmp1 += digits[1];
      tmp2 += digits[g - 1];
      tmp3 += digits[a[a.size() - 1] - '0'];
    }
    /**
     * * B.6 & B.7
     * ? 힘내자! four
     */
    else if (a[0] == '1' && (a[1] == '1' || a[1] == '2') && a[2] == '3') {
      cout << "b6 / b7"
           << " "; //! 디버그
      bool iszero = 0;
      if (((a[a.size() - 1] - '0') - 3) % g != 0) {
        tmp1 += digits[1];
        tmp1 += digits[a[1] - '0'];
        tmp2 += digits[2];
        tmp3 += digits[((a[a.size() - 1] - '0') - 3) % g];
      } else if (a[a.size() - 1] == '3') {
        iszero = 1;
        tmp1 += digits[1];
        tmp1 += digits[a[1] - '0'];
        tmp2 += digits[1];
        tmp3 += digits[1];
      }
      for (int i = 1; i <= a.size() - 4; i++)
        tmp1 += "*";
      for (int i = 1; i <= a.size() - 4; i++)
        tmp2 += "*";
      for (int i = 1; i <= a.size() - 5; i++)
        tmp3 += "*";
      if (iszero) {
        tmp1 += digits[a[1] - '0'];
        tmp1 += digits[1];
        tmp2 += digits[1];
        tmp3 += digits[1];
      } else {
        tmp1 += digits[a[1] - '0'];
        tmp1 += digits[1];
        tmp2 += digits[2];
        tmp3 += digits[((a[a.size() - 1] - '0') - 3) % g];
      }
    }
    /**
     * * B.1 & B.2
     * ? 힘내자!
     */
    else if (a[0] == '1' && a[1] <= '2') {
      bool iszero = 0;
      cout << "b1 / b2"
           << " "; //! 디버그
      if ((a[a.size() - 1] - '0') - (a[2] - '0') != 0 && a[2] >= '4') {
        tmp1 += digits[1];
        tmp1 += digits[a[1] - '0'];
        tmp2 += digits[a[2] - 1 - '0'];
        tmp3 += digits[(a[a.size() - 1] - '0') - (a[2] - '0')];
      } else if ((a[a.size() - 1] - '0') - (a[2] - '0') == 0 && a[2] >= '3') {
        iszero = 1;
        tmp1 += digits[1];
        tmp1 += digits[a[1] - '0'];
        tmp2 += digits[a[2] - 2 - '0'];
        tmp3 += digits[1];
      }
      for (int i = 1; i <= a.size() - 4; i++)
        tmp1 += "*";
      for (int i = 1; i <= a.size() - 4; i++)
        tmp2 += "*";
      for (int i = 1; i <= a.size() - 5; i++)
        tmp3 += "*";
      if (iszero) {
        tmp1 += digits[a[1] - '0'];
        tmp1 += digits[1];
        tmp2 += digits[a[2] - 2 - '0'];
        tmp3 += digits[1];
      } else {
        tmp1 += digits[a[1] - '0'];
        tmp1 += digits[1];
        tmp2 += digits[a[2] - 1 - '0'];
        tmp3 += digits[(a[a.size() - 1] - '0') - (a[2] - '0')];
      }
    }
    /**
     * * ALGORITHM 1
     * ! 발을 들이다.
     */
    if (a[0] != '1') {
      if (a.size() >= 6) {
        int savedx;
        int savedy;
        int C = ((tmp1[0] - '0') + (tmp2[0] - '0') + (tmp3[0] - '0')) / g;
        if (tmp3[0] - '0' <= a[2] - 1 - '0') {
          tmp1[1] = digits[((a[1] - '0') - (tmp2[0] - '0') % g) + ':' - '0'];
          tmp1[tmp1.size() - 2] = tmp1[1];
          savedx = tmp1[1];
        } else if (tmp3[0] - '0' >= a[2] - '0') {
          tmp1[1] =
              digits[((a[1] - '0') - (tmp2[0] - '0') - 1 % g) + ':' - '0'];
          tmp1[tmp1.size() - 2] = tmp1[1];
          savedx = tmp1[1];
        }
        tmp2[1] = digits[(a[2] - '0') - (tmp3[0] - '0') - 1 + ':' - '0'];
        tmp2[tmp2.size() - 2] = tmp2[1];
        savedy = tmp2[1];
        tmp3[1] =
            (((a[a.size() - 2] - '0') - (savedx - '0') - (savedy - '0') - C) %
             g) +
            ':';
        tmp3[tmp3.size() - 2] = tmp3[1];
      }
    }
    cout << tmp1 << " " << tmp2 << " " << tmp3;
    cout << "\n";
  }
  return 0;
}