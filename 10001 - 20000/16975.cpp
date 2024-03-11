#include <iostream>
#include <vector>
using namespace std;
typedef long long ll;

void update(vector<ll> &tree, ll diff, ll idx) {
  ll len = tree.size();
  for (int i = idx; i < len; i += i & -i) {
    tree[i] += diff;
  }
}

ll sum(vector<ll> &tree, ll idx) {
  ll res = 0;
  for (int i = idx; i > 0; i -= i & -i) {
    res += tree[i];
  }
  return res;
}

int main(void) {
  cin.tie(0)->sync_with_stdio(0);
  int a;
  cin >> a;
  vector<ll> tree(a + 2), arr(a + 2);
  for (int i = 1; i < a + 1; i++) {
    cin >> arr[i];
    if (i >= 2)
      update(tree, arr[i] - arr[i - 1], i);
    else
      update(tree, arr[i], i);
  }
  int b;
  cin >> b;
  while (b--) {
    int q;
    cin >> q;
    if (q == 1) {
      ll n, m, k;
      cin >> n >> m >> k;
      update(tree, k, n);
      if (m != a)
        update(tree, -k, m + 1);
    } else if (q == 2) {
      ll n;
      cin >> n;
      cout << sum(tree, n) << "\n";
    }
  }
  return 0;
}