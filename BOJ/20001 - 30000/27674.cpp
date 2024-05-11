#include <algorithm>
#include <functional>
#include <iostream>
using namespace std;

int main(void) {
  cin.tie(0)->sync_with_stdio(0);
  int t;
  cin >> t;
  while (t--) {
    string a;
    cin >> a;
    sort(a.begin(), a.end(), greater<>());
    string A = a.substr(0, a.length() - 1);
    string B = a.substr(a.length() - 1, a.length() - 1);
    long long int numA = stoll(A);
    long long int numB = stoll(B);
    cout << numA + numB << "\n";
  }
  return 0;
}