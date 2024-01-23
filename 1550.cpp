#include <iostream>
using namespace std;

int main(void)
{
    char a[7];
    cin >> a;
    unsigned int res = 0;
    res = strtol(a, NULL, 16);
    cout << res << "\n";
    return 0;
}