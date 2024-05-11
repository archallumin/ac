#include <iostream>
using namespace std;

int main(void) {
  cin.tie(NULL);
  cout.tie(NULL);
  ios::sync_with_stdio(false);
  int n, m;
  char str;
  cin >> n >> m;
  char arr[n * 3][m * 8];
  for (int i = 0; i < n * 3; i++) {
    for (int j = 0; j < m * 8; j++) {
      cin >> str;
      arr[i][j] = str;
    }
  }
  for (int i = 0; i < n; i++) {
    for (int j = 0; j < m; j++) {
      int a = arr[3 * i + 1][8 * j + 1] - '0';
      int b = arr[3 * i + 1][8 * j + 3] - '0';
      int answer;
      if (arr[3 * i + 1][8 * j + 6] >= '0' &&
          arr[3 * i + 1][8 * j + 6] <= '9') {
        answer = 10 * (arr[3 * i + 1][8 * j + 5] - '0') +
                 (arr[3 * i + 1][8 * j + 6] - '0');
      } else {
        answer = (arr[3 * i + 1][8 * j + 5] - '0');
      }
      if (a + b == answer) {
        if (arr[3 * i + 1][8 * j + 6] >= '0' &&
            arr[3 * i + 1][8 * j + 6] <= '9') {
          arr[3 * i][8 * j + 1] = '*';
          arr[3 * i][8 * j + 2] = '*';
          arr[3 * i][8 * j + 3] = '*';
          arr[3 * i][8 * j + 4] = '*';
          arr[3 * i][8 * j + 5] = '*';
          arr[3 * i][8 * j + 6] = '*';
          arr[3 * i + 1][8 * j] = '*';
          arr[3 * i + 1][8 * j + 7] = '*';
          arr[3 * i + 2][8 * j + 1] = '*';
          arr[3 * i + 2][8 * j + 2] = '*';
          arr[3 * i + 2][8 * j + 3] = '*';
          arr[3 * i + 2][8 * j + 4] = '*';
          arr[3 * i + 2][8 * j + 5] = '*';
          arr[3 * i + 2][8 * j + 6] = '*';
        } else {
          arr[3 * i][8 * j + 1] = '*';
          arr[3 * i][8 * j + 2] = '*';
          arr[3 * i][8 * j + 3] = '*';
          arr[3 * i][8 * j + 4] = '*';
          arr[3 * i][8 * j + 5] = '*';
          arr[3 * i + 1][8 * j] = '*';
          arr[3 * i + 1][8 * j + 6] = '*';
          arr[3 * i + 2][8 * j + 1] = '*';
          arr[3 * i + 2][8 * j + 2] = '*';
          arr[3 * i + 2][8 * j + 3] = '*';
          arr[3 * i + 2][8 * j + 4] = '*';
          arr[3 * i + 2][8 * j + 5] = '*';
        }
      } else {
        arr[3 * i][8 * j + 3] = '/';
        arr[3 * i + 1][8 * j + 2] = '/';
        arr[3 * i + 2][8 * j + 1] = '/';
      }
    }
  }
  for (int i = 0; i < n * 3; i++) {
    for (int j = 0; j < m * 8; j++) {
      cout << arr[i][j];
    }
    cout << "\n";
  }
}