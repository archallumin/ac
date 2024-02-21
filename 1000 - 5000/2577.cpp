#include <iostream>
using namespace std;

int main(void)
{
    cin.tie(NULL);
    cout.tie(NULL);
    ios::sync_with_stdio(false);
    int a, b, c;
    int arr[10] = {
        0,
    };
    cin >> a;
    cin >> b;
    cin >> c;
    int abc = a * b * c;
    while (abc > 0)
    {
        ++arr[(abc) % 10];
        abc /= 10;
    }
    for (int i = 0; i < 10; i++)
    {
        cout << arr[i] << "\n";
    }
    return 0;
}