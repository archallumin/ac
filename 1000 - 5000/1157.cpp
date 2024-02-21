#include <iostream>
using namespace std;

int main(void)
{
    int count[26] = {
        0,
    };
    int max = -1;
    char res;
    string a;
    cin >> a;
    for (int i = 0; i < a.length(); i++)
    {
        if (a[i] >= 'a' && a[i] <= 'z')
            a[i] = a[i] - 'a' + 'A';
        if (++count[a[i] - 'A'] > max)
        {
            max = count[a[i] - 'A'];
            res = a[i];
        }
    }
    int b = 0;
    for (int i = 0; i < 26; i++)
    {
        if (max == count[i])
            b++;
    }
    if (b == 1)
        cout << res << "\n";
    else
        cout << "?\n";
    return 0;
}