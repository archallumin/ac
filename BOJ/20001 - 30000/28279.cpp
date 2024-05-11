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
    if (qr == "1") {
      int qn;
      cin >> qn;
      dq.push_front(qn);
    }
    if (qr == "2") {
      int qn;
      cin >> qn;
      dq.push_back(qn);
    }
    if (qr == "3") {
      if (dq.empty())
        cout << "-1\n";
      else {
        cout << dq.front() << "\n";
        dq.pop_front();
      }
    }
    if (qr == "4") {
      if (dq.empty())
        cout << "-1\n";
      else {
        cout << dq.back() << "\n";
        dq.pop_back();
      }
    }
    if (qr == "5") {
      cout << dq.size() << "\n";
    }
    if (qr == "6") {
      cout << dq.empty() << "\n";
    }
    if (qr == "7") {
      if (dq.empty())
        cout << "-1\n";
      else
        cout << dq.front() << "\n";
    }
    if (qr == "8") {
      if (dq.empty())
        cout << "-1\n";
      else
        cout << dq.back() << "\n";
    }
  }
  return 0;
}