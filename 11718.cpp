#include <iostream>
#include <string>
using namespace std;

int main(void) {
  string a;
  while (!cin.eof()) {
    getline(cin, a);
    cout << a << "\n";
  }
  return 0;
}