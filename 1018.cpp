#include <iostream>
using namespace std;

int main(void) {
  int a, b;
  int total = 10000;
  int acnt = 0, bcnt = 0;
  cin >> a >> b;
  char arr[a][b];
  for (int i = 0; i < a; i++) {
    for (int j = 0; j < b; j++) {
      cin >> arr[i][j];
    }
  }
  for (int i = 0; i < a - 7; i++) {
    for (int j = 0; j < b - 7; j++) {
      for (int k = i; k < i + 8; k++) {
        for (int l = j; l < j + 8; l++) {
          if (((k - i + l - j) % 2) == 0) {
            if (arr[k][l] != 'W')
              acnt++;
          } else {
            if (arr[k][l] != 'B')
              acnt++;
          }
        }
      }
      for (int k = i; k < i + 8; k++) {
        for (int l = j; l < j + 8; l++) {
          if (((k - i + l - j) % 2) == 0) {
            if (arr[k][l] != 'B')
              bcnt++;
          } else {
            if (arr[k][l] != 'W')
              bcnt++;
          }
        }
      }
      int res = acnt < bcnt ? acnt : bcnt;
      if (res < total)
        total = res;
      acnt = 0, bcnt = 0;
    }
  }
  cout << total << "\n";
  return 0;
}