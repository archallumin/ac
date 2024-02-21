#include <iostream>
using namespace std;

int main(void)
{
    long long int init = 0;
    int a, i = 0;
    cin >> a;
    while (++i)
    {
        if (i == a + 1)
            break;
        if (i == 1)
            init += 5;
        else
            init += 3 * (i - 1) + 4;
    }
    init %= 45678;
    cout << init << "\n";
    return 0;
}