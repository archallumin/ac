#include <iostream>
using namespace std;

int gcd(int a, int b)
{
    int c = 1;
    while (c != 0)
    {
        c = a % b;
        a = b;
        b = c;
    }
    return a;
}

int lcm(int a, int b)
{
    return a * b / gcd(a, b);
}

/**
 * * 위 함수는 최대공약수 (gcd) 와 최소공배수 (lcm) 를 구하는 함수이다.
 * * 꼭 기억해 두자!
 */

int main(void)
{
    cin.tie(NULL);
    ios::sync_with_stdio(false);
    int t;
    int a, b;
    cin >> t;
    while (t--)
    {
        cin >> a >> b;
        cout << lcm(a, b) << " " << gcd(a, b) << "\n";
    }
    return 0;
}