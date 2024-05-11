#include <ctime>
#include <iostream>
using namespace std;

int main(void) {
  cin.tie(NULL);
  cout.tie(NULL);
  ios::sync_with_stdio(false);
  int resp;
  int a, b;
  int arr1[10000] = {
      0,
  };
  int arr2[10000] = {
      0,
  };
  for (int i = 0; i < 10000; i++) {
    arr1[i] = i + 1;
    arr2[i] = i + 1;
  }
  srand(time(NULL));
  for (int i = 0; i < 16000; i++) {
    int r1 = rand() % 10000;
    int r2 = rand() % 10000;
    int r3 = rand() % 10000;
    int r4 = rand() % 10000;
    int temp1;
    int temp2;
    if (r1 != r2 && r1 != r3 && r1 != r4) {
      temp1 = arr1[r1];
      arr1[r1] = arr1[r2];
      arr1[r2] = temp1;
      temp2 = arr2[r3];
      arr2[r3] = arr2[r4];
      arr2[r4] = temp2;
    }
  }
  for (int i = 0; i < 10000; i++) {
    cout << "? A " << arr1[i] << endl;
    cin >> resp;
    if (resp == 1) {
      a = arr1[i];
      break;
    }
  }
  resp = 0;
  for (int j = 0; j < 10000; j++) {
    cout << "? B " << arr2[j] << endl;
    cin >> resp;
    if (resp == 1) {
      b = arr2[j];
      break;
    }
  }
  cout << "! " << a + b << "\n";
}

// 배열을 섞는 방법으로 랜덤을 구현하여 풀었다.
// 쉬운 줄 알았는데 랜덤의 중복도 고려해야 하는 등 나름 난이도가 있는 문제였다.