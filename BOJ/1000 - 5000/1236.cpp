#include <iostream>
using namespace std;

int main(void)
{
    cin.tie(NULL);
    cout.tie(NULL);
    ios::sync_with_stdio(false);
    int a, b;
    int count = 0;
    cin >> a >> b;
    char arr[a][b];
    char str;
    int column = a;
    int row = b;
    for (int i = 0; i < a; i++)
    {
        for (int j = 0; j < b; j++)
        {
            cin >> str;
            arr[i][j] = str;
        }
    }
    for (int i = 0; i < a; i++)
    {
        for (int j = 0; j < b; j++)
        {
            if (arr[i][j] == 'X')
            {
                column--;
                break;
            }
        }
    }
    for (int i = 0; i < b; i++)
    {
        for (int j = 0; j < a; j++)
        {
            if (arr[j][i] == 'X')
            {
                row--;
                break;
            }
        }
    }
    if (row > column)
        cout << row;
    else
        cout << column;
    cout << "\n";
    return 0;
}