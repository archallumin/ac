#include <iostream>
#include <vector>
using namespace std;
typedef long long ll;

void update(vector<ll> &tree, ll diff, ll idx) {
  ll len = tree.size();
  for (int i = idx; i < len; i += i & -i) {
    tree[i] ^= diff;
  }
}

ll sum(vector<ll> &tree, ll idx) {
  ll res = 0;
  for (int i = idx; i > 0; i -= i & -i) {
    res ^= tree[i];
  }
  return res;
}

int main(void) {
  cin.tie(0)->sync_with_stdio(0);
  int a;
  cin >> a;
  vector<ll> tree(a + 2), arr(a + 2);
  for (int i = 1; i < a + 1; i++) {
    int n;
    cin >> n;
    update(tree, n, i);
    update(tree, n, i + 1);
  }
  int b;
  cin >> b;
  while (b--) {
    int q;
    cin >> q;
    if (q == 1) {
      ll n, m, k;
      cin >> n >> m >> k;
      update(tree, k, n + 1);
      if (m != a)
        update(tree, k, m + 2);
    } else if (q == 2) {
      ll n;
      cin >> n;
      cout << sum(tree, n + 1) << "\n";
    }
  }
  return 0;
}