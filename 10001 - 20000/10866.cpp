#include <deque>
#include <iostream>
using namespace std;

int main(void) {
  cin.tie(0)->sync_with_stdio(0);
  deque<int> dq;
  int a;
  cin >> a;
  while (a--) {
    string qr;
    cin >> qr;
    if (qr == "push_front") {
      int qn;
      cin >> qn;
      dq.push_front(qn);
    }
    if (qr == "push_back") {
      int qn;
      cin >> qn;
      dq.push_back(qn);
    }
    if (qr == "pop_front") {
      if (dq.empty())
        cout << "-1\n";
      else {
        cout << dq.front() << "\n";
        dq.pop_front();
      }
    }
    if (qr == "pop_back") {
      if (dq.empty())
        cout << "-1\n";
      else {
        cout << dq.back() << "\n";
        dq.pop_back();
      }
    }
    if (qr == "size") {
      cout << dq.size() << "\n";
    }
    if (qr == "empty") {
      cout << dq.empty() << "\n";
    }
    if (qr == "front") {
      if (dq.empty())
        cout << "-1\n";
      else
        cout << dq.front() << "\n";
    }
    if (qr == "back") {
      if (dq.empty())
        cout << "-1\n";
      else
        cout << dq.back() << "\n";
    }
  }
  return 0;
}