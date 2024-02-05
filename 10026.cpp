#include <iostream>
using namespace std;

int x[4] = {0, 0, 1, -1};
int y[4] = {1, -1, 0, 0};

int main(void) {
  cin.tie(0)->sync_with_stdio(0);
  int a;
  cin >> a;
  char arr[a][a];
  char rgarr[a][a];
  for (int i = 0; i < a; i++) {
    for (int j = 0; j < a; j++) {
      char str;
      cin >> str;
      arr[a][a] = str;
      rgarr[a][a] = str;
    }
  }
}