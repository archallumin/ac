#include <iostream>
using namespace std;

int main(void)
{
    int k = 1, q = 1, l = 2, b = 2, kn = 2, p = 8;
    int a, b2, c, d, e, f;
    cin >> a >> b2 >> c >> d >> e >> f;
    cout << k - a << " " << q - b2 << " " << l - c << " " << b - d << " " << kn - e << " " << p - f << "\n";
    return 0;
}

/* 기존에 있었던 개수에서 현재 있는 개수를 빼서
   그 값을 출력하도록 코드를 작성하였다. */