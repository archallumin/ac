#include <iostream>
#include <string>
using namespace std;

int main(void) {
  string a;
  cin >> a;
  int c = 0;
  while (a.size() > 1) {
    int add = 0;
    for (int i = 0; i < a.size(); i++) {
      add += a[i] - '0';
    }
    a = to_string(add);
    c++;
  }
  cout << c << "\n";
  if (stoi(a) % 3 == 0) {
    cout << "YES\n";
  } else {
    cout << "NO\n";
  }
  return 0;
}