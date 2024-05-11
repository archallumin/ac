#include <iostream>
using namespace std;

int main(void) {
  int a, b, arr[101], sum = 0, max = 0;
  cin >> a >> b;
  for (int i = 0; i < a; i++) {
    cin >> arr[i];
  }
  for (int i = 0; i < a; i++) {
    for (int j = i + 1; j < a; j++) {
      for (int k = j + 1; k < a; k++) {
        sum = arr[i] + arr[j] + arr[k];
        if (sum > b)
          continue;
        if (max < sum)
          max = sum;
      }
    }
  }
  cout << max << "\n";
  return 0;
}