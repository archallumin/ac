#include <iostream>
using namespace std;

int main(void) {
  char arr[13][13];
  for (int i = 0; i < 13; i++) {
    for (int j = 0; j < 13; j++) {
      cin >> arr[i][j];
    }
  }
  // RULE 1
  for (int i = 0; i < 13; i++) {
    int num[10] = {0, 0, 0, 0, 0, 0, 0, 0, 0, 0};
    for (int j = 0; j < 13; j++) {
      if (isdigit(arr[i][j])) {
        if (num[arr[i][j] - '0'] == 1) {
          cout << "GRESKA\n";
          return 0;
        }
        num[arr[i][j] - '0']++;
      }
    }
  }
  // RULE 2
  for (int j = 0; j < 13; j++) {
    int num[10] = {0, 0, 0, 0, 0, 0, 0, 0, 0, 0};
    for (int i = 0; i < 13; i++) {
      if (isdigit(arr[i][j])) {
        if (num[arr[i][j] - '0'] == 1) {
          cout << "GRESKA\n";
          return 0;
        }
        num[arr[i][j] - '0']++;
      }
    }
  }
  // RULE 3
  for (int i = 0; i < 3; i++) {
    for (int j = 0; j < 3; j++) {
      int num[10] = {0, 0, 0, 0, 0, 0, 0, 0, 0, 0};
      for (int k = (i * 4) + 1; k < (i * 4) + 4; k++) {
        for (int l = (j * 4) + 1; l < (j * 4) + 4; l++) {
          if (isdigit(arr[k][l])) {
            if (num[arr[k][l] - '0'] == 1) {
              cout << "GRESKA\n";
              return 0;
            }
            num[arr[k][l] - '0']++;
          }
        }
      }
    }
  }
  cout << "OK\n";
  return 0;
}