#include <iostream>
using namespace std;

int main(void)
{
    int tm, t, c, count = 0; // 목표 시간, 케이스, 값, 시간 카운트
    cin >> tm;
    cin >> t;
    for (int i = 0; i < t; i++)
    { // 사탕의 개수만큼 반복해 준다!
        cin >> c;
        count = count + c; // 입력을 받을 떄마다 시간을 추가해 준다.
    }
    if (count >= tm)
        cout << "Padaeng_i Happy\n"; // 현재 시간이 목표 시간과 같거나 클 경우
    else
        cout << "Padaeng_i Cry\n"; // 현재 시간이 목표 시간보다 작을 경우
    return 0;
}