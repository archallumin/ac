#include <iostream>
#include <string>
using namespace std;

int main(void) {
  string a;
  getline(cin, a);
  if (a.length() > 2 && a[0] == '"' && a[a.length() - 1] == '"') {
    for (int i = 1; i < a.length() - 1; i++) {
      cout << a[i];
    }
    cout << "\n";
  } else
    cout << "CE\n";
  return 0;
}