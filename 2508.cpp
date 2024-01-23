/**
 * 누울 자리를 한 번 더 찾아 주자!
 */

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
        int count = 0;
        int a, b;
        char str;
        cin >> a >> b;
        char box[a][b];
        for (int i = 0; i < a; i++)
        {
            for (int j = 0; j < b; j++)
            {
                cin >> str;
                box[i][j] = str;
            }
        }
        for (int k = 0; k < a; k++)
        {
            for (int l = 0; l < b - 2; l++)
            {
                if (box[k][l] == '>' && box[k][l + 1] == 'o' && box[k][l + 2] == '<')
                {
                    count++;
                }
            }
        }
        for (int m = 0; m < b; m++)
        {
            for (int n = 0; n < a - 2; n++)
            {
                if (box[n][m] == 'v' && box[n + 1][m] == 'o' && box[n + 2][m] == '^')
                {
                    count++;
                }
            }
        }
        cout << count << "\n";
    }
    return 0;
}