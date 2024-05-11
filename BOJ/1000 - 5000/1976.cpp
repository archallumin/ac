// Union Find

#include <iostream>
using namespace std;

int n, m;
int node[202];

int findNode(int a) {
  if (node[a] == a) {
    return a;
  }
  return node[a] = findNode(node[a]);
}

void addNode(int a, int b) {
  a = findNode(a);
  b = findNode(b);
  if (a == b)
    return;
  node[a] = b;
}

int main(void) {
  cin.tie(0)->sync_with_stdio(0);
  int n, m;
  cin >> n >> m;
  for (int i = 1; i <= n; i++) {
    node[i] = i;
  }
  int q;
  for (int i = 1; i <= n; i++) {
    for (int j = 1; j <= n; j++) {
      cin >> q;
      if (q)
        addNode(i, j);
    }
  }
  cin >> q;
  int rt = findNode(q);
  for (int i = 2; i <= m; i++) {
    int nm;
    cin >> nm;
    if (rt != findNode(nm)) {
      cout << "NO\n";
      return 0;
    }
  }
  cout << "YES\n";
  return 0;
}