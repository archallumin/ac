#include <iostream>
#include <string>
using namespace std;

int main(void)
{
    string a; // 이름
    int b, c; // 나이&몸무게
    while (1)
    { // 무한 반복
        cin >> a >> b >> c;
        if (a.find('#') != string::npos && b == 0 && c == 0)
            break; // 문자열이 '# 0 0'이면, 반복 탈출
        else if (b > 17 || c >= 80)
            cout << a << " Senior"
                 << "\n"; // 나이가 17세보다 많거나 몸무게가 80 이상이면 Senior
        else
            cout << a << " Junior"
                 << "\n"; // 그 외에는 Junior
    }
    return 0;
}