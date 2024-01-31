#include <iostream>
using namespace std;

int primenum = 1000000;
int arr[1000001];

void prime() {
  for (int i = 2; i <= primenum; i++)
    arr[i] = i;
  for (int i = 2; i <= primenum; i++) {
    if (arr[i] == 0)
      continue;
    for (int j = 2 * i; j <= primenum; j += i) {
      arr[j] = 0;
    }
  }
}

int main(void) {
  cin.tie(0)->sync_with_stdio(0);
  prime();
  int a, b;
  cin >> a >> b;
  for (int i = a; i <= b; i++) {
    if (arr[i] != 0)
      cout << arr[i] << "\n";
  }
  return 0;
}