#include <iostream>
using namespace std;

int arr[1001];
int cnt[1001];

int main(void) {
  int a, ct = 0;
  cin >> a;
  for (int i = 0; i < a; i++) {
    cin >> arr[i];
  }
  for (int i = 0; i < a; i++) {
    if (arr[i] && i == 0)
      cnt[i] = 1;
    else if (arr[i] && i != 0)
      cnt[i] = cnt[i - 1] + 1;
    else if (!arr[i])
      cnt[i] = 0;
  }
  for (int i = 0; i < a; i++) {
    if (ct < cnt[i])
      ct = cnt[i];
  }
  cout << ct << "\n";
  return 0;
}