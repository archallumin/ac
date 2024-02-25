#include <iostream>
using namespace std;

int main(void) {
  int a,
      arr[42] =
          {
              0,
          },
      count = 0;
  for (int i = 0; i < 10; i++) {
    cin >> a;
    ++arr[a % 42];
  }
  for (int i = 0; i < 42; i++) {
    if (arr[i] != 0)
      count++;
  }
  cout << count << "\n";
  return 0;
}