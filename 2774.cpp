#include <iostream>
using namespace std;

int main(void)
{
    cin.tie(NULL);
    cout.tie(NULL);
    ios::sync_with_stdio(false);
    int t;
    cin >> t;
    while (t--)
    {
        string a;
        int count = 0;
        int acount = 0;
        int arr[10] = {
            0,
        };
        cin >> a;
        for (int i = 0; i < a.length(); i++)
        {
            arr[a[i] - '0']++;
        }
        for (int i = 0; i < 10; i++)
        {
            if (arr[i] >= 1)
            {
                count++;
            }
        }
        cout << count << "\n";
    }
    return 0;
}