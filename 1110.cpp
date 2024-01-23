#include <iostream>
using namespace std;

int main(void)
{
    int a;
    int count = 0;
    cin >> a;
    int initial_a = a;
    while (1)
    {
        a = (a % 10) * 10 + (a / 10 + a % 10) % 10;
        count++;
        if (a == initial_a)
            break;
    }
    cout << count << "\n";
    return 0;
}