#include <iostream>
#include <queue>
using namespace std;

int main(void) {
  int board[101];
  int sorld[101];
  int vis[101];
  for (int i = 1; i <= 100; i++) {
    sorld[i] = i;
    board[i] = -1;
  }
  int a, b;
  cin >> a >> b;
  while (a--) {
    int ladder, ldloc;
    cin >> ladder >> ldloc;
    sorld[ladder] = ldloc;
  }
  while (b--) {
    int snake, snloc;
    cin >> snake >> snloc;
    sorld[snake] = snloc;
  }
  // start BFS
  board[1] = 0;
  queue<int> q;
  q.push(1);
  while (!q.empty()) {
    int idx = q.front();
    q.pop();
    for (int i = 1; i <= 6; i++) {
      int nidx = idx + i;
      if (nidx > 100)
        continue;
      nidx = sorld[nidx];
      if (board[nidx] == -1) {
        board[nidx] = board[idx] + 1;
        q.push(nidx);
      }
    }
  }
  cout << board[100] << "\n";
  return 0;
}