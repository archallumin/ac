/* 정렬한 다음에 처음과 마지막의 곱을 출력한다!!! */

#include <iostream>
#include <algorithm>
using namespace std;

int main(void)
{
    int a;
    cin >> a;
    int arr[a] = {
        0,
    };
    for (int i = 0; i < a; i++)
    {
        cin >> arr[i];
    }
    sort(arr, arr + a);
    cout << arr[0] * arr[a - 1] << "\n";
    return 0;
}