#include <iostream>
#include <string>
using namespace std;

int main(void) {
  string a;
  while (1) {
    getline(cin, a);
    int cnt = 0;
    if (a[0] == '#')
      break;
    for (int i = 0; a[i] != '\0'; i++) {
      if (a[i] == 'a' || a[i] == 'A')
        cnt++;
      else if (a[i] == 'e' || a[i] == 'E')
        cnt++;
      else if (a[i] == 'i' || a[i] == 'I')
        cnt++;
      else if (a[i] == 'o' || a[i] == 'O')
        cnt++;
      else if (a[i] == 'u' || a[i] == 'U')
        cnt++;
    }
    cout << cnt << "\n";
  }
  return 0;
}