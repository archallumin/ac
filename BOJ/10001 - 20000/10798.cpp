#include <iostream>
using namespace std;

char arr[5][15];

int main(void) {
  for (int i = 0; i < 5; i++) {
    cin >> arr[i];
  }
  for (int j = 0; j < 15; j++) {
    for (int k = 0; k < 5; k++) {
      if (arr[k][j] != NULL)
        cout << arr[k][j];
    }
  }
  cout << "\n";
  return 0;
}