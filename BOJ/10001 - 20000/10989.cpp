#include <iostream>
using namespace std;

int main(void) {
  cin.tie(NULL);
  cout.tie(NULL);
  ios::sync_with_stdio(false);

  int n;
  cin >> n;
  int a[10001] = {
      0,
  }; // �迭�� ������ �����Ѵ�.
  for (int i = 0; i < n; i++) {
    int b;
    cin >> b;
    a[b]++;
    /* i�� n�� �� ������ ���ڸ� ��� �Է¹��� ����, a �迭�� �߰���Ų��. */
  }
  for (int j = 0; j < 10001; j++) { // �迭 ������ �� ������
    for (int k = 0; k < a[j]; k++) { // �迭 ���� ���� ���� ���θ� Ȯ���ϸ�
      cout << j << "\n"; // ���� ��� �ش� ���� ��� ����Ѵ�.
    }
  }
  return 0;
}