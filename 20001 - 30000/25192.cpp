#include <iostream>
#include <set>
using namespace std;

int main(void) {
  int t;
  int cnt = 0;
  set<string> st;
  cin >> t;
  while (t--) {
    string a;
    cin >> a;
    if (a == "ENTER") {
      cnt += st.size();
      st.clear();
      continue;
    }
    st.insert(a);
  }
  cnt += st.size();
  cout << cnt << "\n";
  return 0;
}