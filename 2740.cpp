#include <iostream>
using namespace std;

int main(void)
{
    int a, b, c;
    cin >> a >> b;
    int arr1[101][101] = {
        0,
    };
    for (int i = 0; i < a; i++)
    {
        for (int j = 0; j < b; j++)
        {
            cin >> arr1[i][j];
        }
    }
    cin >> b >> c;
    int arr2[101][101] = {
        0,
    };
    for (int k = 0; k < b; k++)
    {
        for (int l = 0; l < c; l++)
        {
            cin >> arr2[k][l];
        }
    }
    int arr3[101][101] = {
        0,
    };
    for (int i = 0; i < a; i++)
    {
        for (int j = 0; j < c; j++)
        {
            for (int k = 0; k < b; k++)
            {
                arr3[i][j] += arr1[i][k] * arr2[k][j];
            }
        }
    }
    for (int i = 0; i < a; i++)
    {
        for (int j = 0; j < c; j++)
        {
            cout << arr3[i][j] << " ";
        }
        cout << "\n";
    }
    return 0;
}