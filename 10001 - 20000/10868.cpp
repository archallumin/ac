#include <cmath>
#include <iostream>
#include <vector>
#define ll long long
using namespace std;

// a: 배열
// tree: 세그먼트 트리
// node: 정점 번호

void init(vector<ll> &a, vector<ll> &tree, int node, int s, int e) {
  // s == e: 리프 정점인 경우
  if (s == e)
    tree[node] = a[s];
  else {
    // 리프 정점이 아니면
    // * 재귀 구현을 사용할 예정
    // 왼쪽 자식
    init(a, tree, node * 2, s, (s + e) / 2);
    // 오른쪽 자식
    init(a, tree, node * 2 + 1, (s + e) / 2 + 1, e);
    tree[node] = min(tree[node * 2], tree[node * 2 + 1]); // 재귀 값 구하기
  }
}

ll query(vector<ll> &tree, int node, int s, int e, int l, int r) {
  if (l > e || r < s)
    return -1;
  if (l <= s && e <= r)
    return tree[node];
  ll ls = query(tree, node * 2, s, (s + e) / 2, l, r);
  ll rs = query(tree, node * 2 + 1, (s + e) / 2 + 1, e, l, r);
  if (ls == -1)
    return rs;
  else if (rs == -1)
    return ls;
  else
    return min(ls, rs);
}

// 구현의 시간

int main(void) {
  cin.tie(0)->sync_with_stdio(0);
  int x, y;
  cin >> x >> y;
  vector<ll> a(x);                 // 트리 선언
  int height = (int)ceil(log2(x)); // 높이
  int size = 1 << (height + 1);    // 트리의 크기
  vector<ll> tree(size);           // 실제 트리
  for (int i = 0; i < x; i++) {
    cin >> a[i];
  }
  init(a, tree, 1, 0, x - 1);
  while (y--) {
    ll l, r;
    cin >> l >> r;
    cout << query(tree, 1, 0, x - 1, l - 1, r - 1) << "\n";
  }
  return 0;
}