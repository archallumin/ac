#include <bits/stdc++.h>
using namespace std;

int result_size;
int result[1000000];

void Multiply(int x)
{
    int carry = 0;
    for (int i = 0; i < result_size; i++)
    {
        int prod = result[i] * x + carry;
        result[i] = prod % 10;
        carry = prod / 10;
    }
    while (carry)
    {
        result[result_size] = carry % 10;
        carry = carry / 10;
        result_size++;
    }
}
// Complete the extraLongFactorials function below.
void extraLongFactorials(int n)
{
    result[0] = 1;
    result_size = 1;

    for (int x = 2; x <= n; x++)
        Multiply(x);

    for (int i = result_size - 1; i >= 0; i--)
        cout << result[i];
}

int main()
{
    cin.tie(NULL);
    cout.tie(NULL);
    ios::sync_with_stdio(false);
    int n;
    cin >> n;
    cin.ignore(numeric_limits<streamsize>::max(), '\n');

    extraLongFactorials(n);

    return 0;
}