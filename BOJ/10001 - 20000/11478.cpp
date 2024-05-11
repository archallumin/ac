#include <iostream>
#include <set>
using namespace std;

int main(void) {
  cin.tie(0)->sync_with_stdio(0);
  set<string> str;
  string a, tmp;
  cin >> a;
  for (int i = 0; i < a.length(); i++) {
    tmp = "";
    for (int j = i; j < a.length(); j++) {
      tmp += a[j];
      str.insert(tmp);
    }
  }
  cout << str.size() << "\n";
  return 0;
}