#include <iostream>
using namespace std;

int main(void)
{
    cin.tie(NULL);
    cout.tie(NULL);
    ios_base::sync_with_stdio(false);
    long long a;
    int count = 0;
    cin >> a;
    while (1)
    {
        if (a % 5 == 0)
        {
            a -= 5;
            count++;
        }
        else
        {
            if (a % 3 == 0)
            {
                a -= 3;
                count++;
            }
            else
            {
                a -= 5;
                count++;
                if (a < 0)
                {
                    count = -1;
                    break;
                }
            }
        }
        if (a == 0)
            break;
    }
    cout << count << "\n";
    return 0;
}