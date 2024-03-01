#include <iostream>
using namespace std;
class Chocolate {
  int m, n;

public:
  Chocolate(int m_, int n_) {
    m = m_;
    n = n_;
  }
  int getChocolate() { return (m * n) - 1; } // ���ݸ��� �ɰ��� �ּ� ����
};
/* ���� Ŭ������ �� �ʿ䰡 �־����� ? */
int main(void) {
  int m, n;
  cin >> m >> n;
  if (m < 1 || n < 1 || m > 301 || n > 301) {
    cout << "Error!\n";
    return 0;
  } else {
    Chocolate choco(m, n);
    cout << choco.getChocolate() << "\n";
    return 0;
  }
}