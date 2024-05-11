#include <cmath>
#include <iostream>
#include <vector>
#define ll long long
using namespace std;

// a: 배열
// mintree, maxtree: 최소/최대 세그먼트 트리
// node: 정점 번호

void init(vector<ll> &a, vector<ll> &mintree, vector<ll> &maxtree, int node,
          int s, int e) {
  // s == e: 리프 정점인 경우
  if (s == e)
    mintree[node] = maxtree[node] = a[s];
  else {
    // 리프 정점이 아니면
    // * 재귀 구현을 사용할 예정
    // 왼쪽 자식
    init(a, mintree, maxtree, node * 2, s, (s + e) / 2);
    // 오른쪽 자식
    init(a, mintree, maxtree, node * 2 + 1, (s + e) / 2 + 1, e);
    mintree[node] = min(mintree[node * 2], mintree[node * 2 + 1]);
    maxtree[node] = max(maxtree[node * 2], maxtree[node * 2 + 1]);
  }
}

pair<ll, ll> query(vector<ll> &mintree, vector<ll> &maxtree, int node, int s,
                   int e, int l, int r) {
  if (l > e || r < s)
    return {2147483647, 0};
  if (l <= s && e <= r)
    return {mintree[node], maxtree[node]};
  pair<ll, ll> ls, rs;
  ls = query(mintree, maxtree, node * 2, s, (s + e) / 2, l, r);
  rs = query(mintree, maxtree, node * 2 + 1, (s + e) / 2 + 1, e, l, r);
  return {min(ls.first, rs.first), max(ls.second, rs.second)};
}

// 구현의 시간

int main(void) {
  cin.tie(0)->sync_with_stdio(0);
  int x, y;
  pair<ll, ll> res;
  cin >> x >> y;
  vector<ll> a(x);                 // 트리 선언
  int height = (int)ceil(log2(x)); // 높이
  int size = 1 << (height + 1);    // 트리의 크기
  vector<ll> mintree(size);
  vector<ll> maxtree(size); // 실제 트리
  for (int i = 0; i < x; i++) {
    cin >> a[i];
  }
  init(a, mintree, maxtree, 1, 0, x - 1);
  while (y--) {
    ll l, r;
    cin >> l >> r;
    res = query(mintree, maxtree, 1, 0, x - 1, l - 1, r - 1);
    cout << res.first << " " << res.second << "\n";
  }
  return 0;
}