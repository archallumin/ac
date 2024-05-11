#include <iostream>
using namespace std;

int main(void) {
  int arr[100][100] = {
      0,
  };
  int t;
  int count = 0;
  cin >> t;
  while (t--) {
    int a, b;
    cin >> a >> b;
    for (int i = a; i < 10 + a; i++) {
      for (int j = b; j < 10 + b; j++) {
        arr[i][j] = 1;
      }
    }
  }
  for (int i = 0; i < 100; i++) {
    for (int j = 0; j < 100; j++) {
      if (arr[i][j] == 1)
        count++;
    }
  }
  cout << count << "\n";
}