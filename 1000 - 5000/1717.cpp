// Union Find

#include <iostream>
using namespace std;

int n, m;
int node[1000001];

int findNode(int a) {
  if (node[a] == a) {
    return a;
  }
  node[a] = findNode(node[a]);
  return node[a];
}

void addNode(int a, int b) {
  a = findNode(a);
  b = findNode(b);
  if (a == b)
    return;
  node[b] = a;
}

int main(void) {
  cin.tie(0)->sync_with_stdio(0);
  int n, m;
  cin >> n >> m;
  for (int i = 0; i < 1000001; i++) {
    node[i] = i;
  }
  while (m--) {
    int a;
    cin >> a;
    if (a == 0) {
      int x, y;
      cin >> x >> y;
      addNode(x, y);
    } else if (a == 1) {
      int x, y;
      cin >> x >> y;
      if (findNode(x) == findNode(y))
        cout << "YES\n";
      else
        cout << "NO\n";
    }
  }
  return 0;
}