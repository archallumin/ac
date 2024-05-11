#include <iostream>
using namespace std;
/* ������ ����� �Ǵϱ� long double�� ���� �Ͼ� ����... */
int main(void)
{
	int a, b;
	cin >> a >> b;
	cout << fixed; // cout�� �̷� ����� �ִ� ���� ������
	cout.precision(16);
	cout << (long double)a / b << "\n";
	return 0;
}