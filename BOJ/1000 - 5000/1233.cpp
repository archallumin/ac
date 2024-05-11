#include <iostream>
using namespace std;

int main(void)
{
    int a, b, c;
    int max = -1;
    cin >> a >> b >> c;
    int arr[81] = {
        0,
    };
    for (int i = 1; i <= a; i++)
    {
        for (int j = 1; j <= b; j++)
        {
            for (int k = 1; k <= c; k++)
            {
                arr[i + j + k]++;
                if (arr[i + j + k] > max)
                {
                    max = arr[i + j + k];
                }
            }
        }
    }
    for (int i = 3; i < a + b + c; i++)
    {
        if (max == arr[i])
        {
            cout << i << "\n";
            return 0;
        }
    }
}