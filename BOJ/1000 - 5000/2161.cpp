#include <iostream>
#include <queue>
using namespace std;

int main(void) {
  queue<int> arr;
  int a;
  cin >> a;
  for (int i = 1; i <= a; i++) {
    arr.push(i);
  }
  while (arr.size() > 1) {
    cout << arr.front() << " ";
    arr.pop();
    arr.push(arr.front());
    arr.pop();
  }
  cout << arr.front() << "\n";
  return 0;
}