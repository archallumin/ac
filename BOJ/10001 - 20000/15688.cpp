#include <algorithm>
#include <iostream>

using namespace std;

/*정렬하는 방법을 알면 의외로 쉬운 문제였다.
어디 블로그에서는 무슨 음수 배열을 선언하라느니 했지만
그딴 건 없었고 그냥 sort() 함수만 써주면 쉽게 풀린다.*/

int main(void) {
  cin.tie(NULL);
  cout.tie(NULL);
  ios_base::sync_with_stdio(false);
  /* 이 위의 코드는 시간 단축을 위한 코드 */
  int t, a;
  cin >> t;
  int arr[t];
  for (int i = 0; i < t; i++) {
    cin >> a;
    arr[i] = a;
  }
  sort(arr, arr + t); // 정렬한다.
  for (int j = 0; j < t; j++) {
    cout << arr[j] << "\n"; // 비내림차순으로 줄 바꿈을 하며 출력한다.
  }
  return 0;
}