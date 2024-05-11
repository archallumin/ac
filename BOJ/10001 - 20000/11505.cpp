#include <cmath>
#include <iostream>
#include <vector>
#define ll long long
using namespace std;

// a: 배열
// tree: 세그먼트 트리
// node: 정점 번호
// node에 있는 합: s - e

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
    tree[node] =
        (tree[node * 2] * tree[node * 2 + 1]) % 1000000007; // 재귀 값 구하기
  }
}

// 값 변경하기

void update(vector<ll> &a, vector<ll> &tree, int node, int s, int e, int idx,
            ll val) {
  if (idx < s || idx > e) {
    return;
  }
  if (s == e) {
    a[idx] = val;
    tree[node] = val;
    return;
  }
  update(a, tree, node * 2, s, (s + e) / 2, idx, val);
  update(a, tree, node * 2 + 1, (s + e) / 2 + 1, e, idx, val);
  tree[node] = (tree[node * 2] * tree[node * 2 + 1]) % 1000000007;
}

// 곱 구하기

ll query(vector<ll> &tree, int node, int s, int e, int l, int r) {
  if (l > e || r < s)
    return 1;
  if (l <= s && e <= r)
    return tree[node];
  ll ls = query(tree, node * 2, s, (s + e) / 2, l, r);
  ll rs = query(tree, node * 2 + 1, (s + e) / 2 + 1, e, l, r);
  return (ls * rs) % 1000000007;
}

// 구현의 시간

int main(void) {
  cin.tie(0)->sync_with_stdio(0);
  int x, y, z;
  cin >> x >> y >> z;
  vector<ll> a(x);                 // 트리 선언
  int height = (int)ceil(log2(x)); // 높이
  int size = 1 << (height + 1);    // 트리의 크기
  vector<ll> tree(size);           // 실제 트리
  y += z;                          // init
  for (int i = 0; i < x; i++) {
    cin >> a[i];
  }
  init(a, tree, 1, 0, x - 1);
  while (y--) {
    int q;
    cin >> q;
    if (q == 1) {
      int r;
      ll s;
      cin >> r >> s;
      update(a, tree, 1, 0, x - 1, r - 1, s);
    } else if (q == 2) {
      ll l, r;
      cin >> l >> r;
      cout << query(tree, 1, 0, x - 1, l - 1, r - 1) << "\n";
    }
  }
  return 0;
}