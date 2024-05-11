#include <iostream>
using namespace std;

int main(void) {
  cin.tie(0)->sync_with_stdio(0);
  int t;
  cin >> t;
  for (int i = 1; i <= t; i++) {
    bool flag = 1;
    int a;
    cin >> a;
    int arr[36][36];
    for (int i = 0; i < a * a; i++) {
      for (int j = 0; j < a * a; j++) {
        cin >> arr[i][j];
      }
    }
    // rule 1. 숫자가 범위를 넘는지 확인하기
    for (int i = 0; i < a * a; i++) {
      for (int j = 0; j < a * a; j++) {
        if (arr[i][j] > a * a)
          flag = 0;
      }
    }
    // rule 2. 행 검사하여 중복이 있는지 확인
    for (int i = 0; i < a * a; i++) {
      int num[10] = {0, 0, 0, 0, 0, 0, 0, 0, 0, 0};
      for (int j = 0; j < a * a; j++) {
        if (num[arr[i][j]] == 1)
          flag = 0;
        num[arr[i][j]]++;
      }
    }
    // rule 3. 열 검사하여 중복이 있는지 확인
    for (int j = 0; j < a * a; j++) {
      int num[10] = {0, 0, 0, 0, 0, 0, 0, 0, 0, 0};
      for (int i = 0; i < a * a; i++) {
        if (num[arr[i][j]] == 1)
          flag = 0;
        num[arr[i][j]]++;
      }
    }
    // rule 4. 각 n*n 사각형을 검사하여 중복이 있는지 확인
    for (int i = 0; i < a; i++) {
      for (int j = 0; j < a; j++) {
        int num[10] = {0, 0, 0, 0, 0, 0, 0, 0, 0, 0};
        for (int k = i * 3; k <= i * 3 + (a - 1); k++) {
          for (int l = j * 3; l <= j * 3 + (a - 1); l++) {
            if (num[arr[k][l]] == 1)
              flag = 0;
            num[arr[k][l]]++;
          }
        }
      }
    }
    cout << "Case #" << i << ": ";
    if (flag)
      cout << "Yes\n";
    else
      cout << "No\n";
  }
  return 0;
}