#include <algorithm>
#include <iostream>
using namespace std;

int main(void) {
  int a, b;
  cin >> a;
  int arr[a];
  for (int i = 0; i < a; i++) {
    cin >> b;
    arr[i] = b;
  }
  if (count(arr, arr + a, 0) > count(arr, arr + a, 1))
    cout << "Junhee is not cute!\n";
  else
    cout << "Junhee is cute!\n";
  return 0;
}