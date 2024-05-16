#include <iostream>
using namespace std;

char arr[505][505];

int main(void) {
  cin.tie(0)->sync_with_stdio(0);
  int a, b;
  cin >> a >> b;
  for (int i = 0; i < a; i++) {
    for (int j = 0; j < b; j++) {
      char str;
      cin >> str;
      arr[i][j] = str;
    }
  }
  for (int i = 0; i < a; i++) {
    for (int j = 0; j < b; j++) {
      if (arr[i][j] == 'S') {
        int xx[4] = {0, 0, 1, -1};
        int yy[4] = {1, -1, 0, 0};
        for (int k = 0; k < 4; k++) {
          int X = i + xx[k];
          int Y = j + yy[k];
          if (X < 0 || Y < 0 || X >= a || Y >= b)
            continue;
          if (arr[X][Y] == '.') {
            arr[X][Y] = 'D';
          }
          if (arr[X][Y] == 'W') {
            cout << "0\n";
            return 0;
          }
        }
      }
    }
  }
  cout << "1\n";
  for (int i = 0; i < a; i++) {
    for (int j = 0; j < b; j++) {
      cout << arr[i][j];
    }
    cout << "\n";
  }
  return 0;
}