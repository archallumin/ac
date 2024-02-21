#include <iostream>
using namespace std;

int main(void)
{
    int a, count = 0;
    cin >> a;
    for (int i = 1; i <= a; i++)
    {
        if (a % i == 0)
        {
            count += i;
        }
    }
    cout << (count * 5) - 24 << "\n";
    return 0;
}