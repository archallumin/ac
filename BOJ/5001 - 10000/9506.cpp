#include <iostream>
#include <vector>

using namespace std;

vector<int> gnum(int N) {
  vector<int> a;

  for (int i = 1; i <= N; i++) {
    if (N % i == 0) {
      a.push_back(i);
    }
  }

  return a;
}

int main(void) {
  cin.tie(0)->sync_with_stdio(0);
  while (1) {
    int a, cnt = 0;
    cin >> a;
    if (a == -1)
      break;
    vector<int> arr = gnum(a);
    for (int i = 0; i < arr.size() - 1; i++) {
      cnt += arr[i];
    }
    if (cnt == a) {
      cout << a << " = ";
      for (int i = 0; i < arr.size() - 1; i++) {
        cout << arr[i] << " ";
        if (i != arr.size() - 2)
          cout << "+ ";
      }
      cout << "\n";
    } else {
      cout << a << " is NOT perfect.\n";
    }
  }
  return 0;
}