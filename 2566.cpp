/**
 * 오늘은 이거 풀고 자야겠다
 */

#include <iostream>
using namespace std;

int main(void)
{
    int max = 0;
    int l = 0;
    int c = 0;
    int arr[9][9] = {
        0,
    };
    for (int i = 0; i < 9; i++)
    {
        for (int j = 0; j < 9; j++)
        {
            cin >> arr[i][j];
        }
    }
    for (int i = 0; i < 9; i++)
    {
        for (int j = 0; j < 9; j++)
        {
            if (arr[i][j] > max)
            {
                max = arr[i][j];
                l = i;
                c = j;
            }
        }
    }
    cout << max << "\n"
         << l + 1 << " " << c + 1 << "\n";
    return 0;
}