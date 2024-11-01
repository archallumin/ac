#include <iostream>
using namespace std;

int arr[1025][1025] = {0,};
int sum[1025][1025] = {0,};

int main(void) {
    cin.tie(0)->sync_with_stdio(0);
    int a, b;
    cin >> a >> b;
    for (int i=1; i<=a; i++) {
        for (int j=1; j<=a; j++) {
            cin >> arr[i][j];
        }
    }
    for (int i=1; i<=a; i++) {
        for (int j=1; j<=a; j++) {
            sum[i][j] = sum[i-1][j] + sum[i][j-1] - sum[i-1][j-1] + arr[i][j];
        }
    }
    while (b--) {
        int n,m,k,l;
        cin >> n >> m >> k >> l;
        cout << sum[k][l] - sum[n-1][l] - sum[k][m-1] + sum[n-1][m-1] << "\n";
        // 규칙 더 신경써서 찾아 보기
        // https://nahwasa.com/entry/%EB%88%84%EC%A0%81-%ED%95%A9prefix-sum-2%EC%B0%A8%EC%9B%90-%EB%88%84%EC%A0%81%ED%95%A9prefix-sum-of-matrix-with-java
    }
    return 0;
}