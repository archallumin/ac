#include <iostream>
#include <queue>
using namespace std;

int main(void) {
  cin.tie(0);
  ios::sync_with_stdio(false);
  queue<int> arr;
  int t;
  cin >> t;
  while (t--) {
    string a;
    int b;
    cin >> a;
    if (a == "push") {
      cin >> b;
      arr.push(b);
    }
    if (a == "pop") {
      if (arr.empty())
        cout << "-1\n";
      else {
        cout << arr.front() << "\n";
        arr.pop();
      }
    }
    if (a == "size") {
      cout << arr.size() << "\n";
    }
    if (a == "empty") {
      cout << arr.empty() << "\n";
    }
    if (a == "front") {
      if (arr.empty())
        cout << "-1\n";
      else
        cout << arr.front() << "\n";
    }
    if (a == "back") {
      if (arr.empty())
        cout << "-1\n";
      else
        cout << arr.back() << "\n";
    }
  }
  return 0;
}