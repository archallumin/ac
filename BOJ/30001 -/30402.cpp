#include <iostream>
using namespace std;

int main(void) {
  cin.tie(0)->sync_with_stdio(0);
  string arr[15][15];
  for (int i = 0; i < 15; i++) {
    for (int j = 0; j < 15; j++) {
      cin >> arr[i][j];
    }
  }
  for (int i = 0; i < 15; i++) {
    for (int j = 0; j < 15; j++) {
      if (arr[i][j] == "w") {
        cout << "chunbae\n";
        return 0;
      }
      if (arr[i][j] == "b") {
        cout << "nabi\n";
        return 0;
      }
      if (arr[i][j] == "g") {
        cout << "yeongcheol\n";
        return 0;
      }
    }
  }
  return 0;
}