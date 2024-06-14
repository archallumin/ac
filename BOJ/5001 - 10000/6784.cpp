#include <iostream>
using namespace std;

int main(void) {
  string arr[10001], arr2[10001];
  int cnt = 0;
  int a;
  cin >> a;
  for (int i = 1; i <= a; i++)
    cin >> arr[i];
  for (int i = 1; i <= a; i++)
    cin >> arr2[i];
  for (int i = 1; i <= a; i++) {
    if (arr[i] == arr2[i])
      cnt++;
  }
  cout << cnt << "\n";
  return 0;
}