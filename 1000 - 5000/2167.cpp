#include <iostream>
using namespace std;

int main(void)
{
    cin.tie(NULL);
    cout.tie(NULL);
    ios::sync_with_stdio(false);
    //* 빠른 입력을 위한 과정 코드
    int a, b;
    cin >> a >> b;
    int arr[a][b];
    for (int i = 0; i < a; i++)
    {
        for (int j = 0; j < b; j++)
        {
            cin >> arr[i][j];
        }
    }
    /**
     * ! 2차원 배열을 선언하고,
     * * 2차원 배열에 원소를 입력해 준다.
     */
    int x, m, n, o, p;
    cin >> x;
    while (x--)
    {
        int sum = 0;
        cin >> m >> n >> o >> p;
        for (int k = m - 1; k < o; k++)
        {
            for (int l = n - 1; l < p; l++)
            {
                sum += arr[k][l];
            }
        }
        cout << sum << "\n";
    }
    /**
     * * sum 함수로 더하기 값을 지정해 주고,
     * * 그 값을 출력하며 프로그램을 끝낸다!
     */
    return 0;
}