#include <iostream>
using namespace std;

int main(void)
{
    long int a, b; // a와 b 값을 받고
    cin >> a;
    cin >> b;
    // 잘못했다...
    // 00부터 99까지 자리수를 대입해서 계산하고 가장 작은 값을 출력해 보자.
    a /= 100;
    a *= 100;
    while (a % b != 0)
        a++;
    a %= 100;
    if (a < 10)
        cout << "0" << a << "\n";
    else
        cout << a << "\n";
    // 마지막 두 번째 자리를 출력한다..
    return 0;
}