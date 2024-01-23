#include <iostream>
using namespace std;

int main(void)
{
    int max = 0;
    int arr[11] = {
        0,
    };
    string str;
    cin >> str;
    for (int i = 0; i < str.length(); i++)
    {
        if (str[i] == '6' || str[i] == '9')
        {
            arr[10]++;
        }
        else
        {
            arr[str[i] - '0']++;
        }
    }
    for (int i = 0; i < 10; i++)
    {
        if (arr[i] > max)
        {
            max = arr[i];
        }
    }
    if (max < (arr[10] + 1) / 2)
        max = (arr[10] + 1) / 2;
    cout << max << "\n";
    return 0;
}