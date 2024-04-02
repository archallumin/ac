#include <iostream>
using namespace std;

int main(void) {
  int a;
  cin >> a;
  string arr[a];
  for (int i = 0; i < a; i++) {
    string t;
    cin >> t;
    arr[i] = t;
  }
  for (int i = 0; i < a; i++) {
    cout << "? " << arr[i] << endl;
    int q;
    cin >> q;
    if (q == 1) {
      cout << "! " << arr[i] << endl;
      return 0;
    } else if (q == 0) {
      cout << "? " << arr[i] << endl;
      int q;
      cin >> q;
      if (q == 1) {
        cout << "! " << arr[i] << endl;
        return 0;
      }
    }
  }
  return 0;
}