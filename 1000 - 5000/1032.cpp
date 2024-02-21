/* 문자 하나씩 비교하고 다르다면 ?를 출력한다! */

#include <iostream>
using namespace std;

int main(void)
{
    int a;
    cin >> a;
    string data[a];
    string b;
    for (int i = 0; i < a; i++)
    { // 받을 문자의 개수를 정한 다음 그 개수에 맞춰 입력한다.
        cin >> data[i];
    }
    // 문자 하나씩 비교하면서...
    for (int j = 0; j < data[0].size(); j++)
    {
        bool isdiff = false;
        for (int k = 1; k < a; k++)
        {
            if (data[k - 1][j] != data[k][j])
            { // k-1번째 문자열, k번째 문자열을 비교하고,
                isdiff = true;
                cout << "?"; // 다르다면 ?를 출력해 준다.
                break;
            }
        }
        if (!isdiff)
        {
            cout << data[0][j]; // isdiff bool이 false라면, 해당 문자를 출력한다.
        }
    }
    cout << "\n";
    return 0;
}