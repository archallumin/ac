#include <iostream>
using namespace std;

int main(void)
{
    int n, m;
    int a;
    cin >> n >> m;
    int arr[n][m];
    int arr_2[n][m];
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            cin >> a;
            arr[i][j] = a;
        }
    }
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            cin >> a;
            arr_2[i][j] = a;
        }
    }
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            cout << arr[i][j] + arr_2[i][j] << " ";
        }
        cout << "\n";
    }
}