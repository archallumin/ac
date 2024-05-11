#include <algorithm>
#include <iostream>

using namespace std;

struct location {
  int a;
  int b;
};

bool comp(location a, location b) {
  if (a.b == b.b) {
    return a.a < b.a;
  } else {
    return a.b < b.b;
  }
}

//! 집중 교육 대상!!!!!!!!!!!!!!!!!

int main(void) {
  cin.tie(NULL);
  cout.tie(NULL);
  ios::sync_with_stdio(false);
  int t;
  cin >> t;
  location arr[100001];
  for (int i = 0; i < t; i++) {
    cin >> arr[i].a >> arr[i].b;
  }
  sort(arr, arr + t, comp);
  for (int i = 0; i < t; i++) {
    cout << arr[i].a << " " << arr[i].b << "\n";
  }
  return 0;
}