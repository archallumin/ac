#include <iostream>
#include <string>
using namespace std;

/**
 * 아이디어:
 * 배열을 만들어서 알파벳을 정수로 변환한 다음 그 정수에 해당하는 문자열로
 * 바꿔 주며 출력한다.
 * ... 잠깐만.. 이러면 배열을 2개를 만들어 줘야겠는데...?
 */

int main(void)
{
    int t;
    cin >> t;
    cin.ignore();
    while (t--)
    {
        string str, arr;
        getline(cin, str);
        getline(cin, arr);
        for (int i = 0; i < str.length(); i++)
        {
            if (str[i] == ' ')
            {
                cout << " ";
            }
            else
            {
                cout << arr[str[i] - 'A'];
            }
        }
        cout << "\n";
    }
    return 0;
}