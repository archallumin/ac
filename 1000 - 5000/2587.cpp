#include <iostream>
#include <algorithm>
using namespace std;

int main(void)
{
    int a; // 정수 선언
    int arr[5] = {
        0,
    };             // 5개의 배열 선언
    int count = 0; // 총합 선언
    for (int i = 0; i < 5; i++)
    {
        cin >> a;   // 5번 a를 입력받고
        arr[i] = a; // 배열에 저장한 다음
        count += a; // 카운트를 계속 더한다.
    }
    sort(arr, arr + 5); // 중앙값을 구하기 위해 배열을 정렬해 준다.
    cout << count / 5 << "\n"
         << arr[2] << "\n"; // 평균, 중앙값
    return 0;
}