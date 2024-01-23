#include <iostream>
using namespace std;

int main(void)
{
    string a;
    int t;
    cin >> t;
    int count = 0;
    for (int k = 0; k < t; k++)
    {
        bool group = 1;
        cin >> a;
        int arr[26] = {
            0,
        };
        arr[(int)a[0] - 'a'] = 1;
        for (int i = 1; i < a.length(); i++)
        {
            for (int j = 0; j < i; j++)
            {
                if (a[i] != a[i - 1] && a[i] == a[j])
                    group = 0;
                break;
            }
        }
        if (group)
            count++;
    }
    cout << count << "\n";
    return 0;
}