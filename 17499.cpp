#include <iostream>
using namespace std;

int main(void) {
  cin.tie(0)->sync_with_stdio(0);
  int a, b;
  int sft = 0;
  cin >> a >> b;
  int arr[a];
  for (int i = 0; i < a; i++) {
    cin >> arr[i];
  }
  while (b--) {
    int q;
    cin >> q;
    if (q == 1) {
      int idx, num;
      cin >> idx >> num;
      arr[(idx - 1 + sft) % a] += num;
    }
    if (q == 2) {
      int st;
      cin >> st;
      sft = (sft + a - st) % a;
    }
    if (q == 3) {
      int st;
      cin >> st;
      sft = (sft + st) % a;
    }
  }
  for (int i = 0; i < a; i++) {
    cout << arr[(sft + i) % a] << " ";
  }
  return 0;
}