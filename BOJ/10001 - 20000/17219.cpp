#include <iostream>
#include <map>
#define fastio cin.tie(0)->sync_with_stdio(0);
using namespace std;

int main(void) {
  fastio;
  map<string, string> arr;
  int a, b;
  cin >> a >> b;
  while (a--) {
    string x, y;
    cin >> x >> y;
    arr.insert(make_pair(x, y));
  }
  while (b--) {
    string fnd;
    cin >> fnd;
    cout << arr[fnd] << "\n";
  }
  return 0;
}