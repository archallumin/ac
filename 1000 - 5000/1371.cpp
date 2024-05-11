#include <iostream>
using namespace std;

int arr[26], mx = 0;

int main(void) {
  while (1) {
    char a = 0;
    cin >> a;
    if (a == 0)
      break;
    if ('a' <= a && a <= 'z')
      arr[a - 'a']++;
  }
  for (int i = 0; i < 26; i++) {
    if (mx < arr[i])
      mx = arr[i];
  }
  for (int i = 0; i < 26; i++) {
    if (mx == arr[i])
      cout << (char)(i + 'a');
  }
  return 0;
}