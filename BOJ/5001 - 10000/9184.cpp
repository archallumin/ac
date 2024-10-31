#include <iostream>
using namespace std;

int dp[21][21][21];

int f(int a, int b, int c) { // 재귀 + dp라는 정말 신기한 테크닉. 이런 걸 왜 몰랐을까?
    if (a <= 0 || b <= 0 || c <= 0)
        return 1;
    if (a > 20 || b > 20 || c > 20)
        return 1048576;
    if (dp[a][b][c] != 0) return dp[a][b][c]; // 이게 왜 빨라지는 코드일까?
    if ((a < b) && (b < c)) {
        dp[a][b][c] = f(a, b, c-1) + f(a, b-1, c-1) - f(a, b-1, c);
        return dp[a][b][c];
    }
    else {
        dp[a][b][c] = f(a-1, b, c) + f(a-1, b-1, c)
                    + f(a-1, b, c-1) - f(a-1, b-1, c-1);
        return dp[a][b][c];
    }
    return dp[a][b][c];
}

int main(void) {
    int a,b,c;
    while (1) {
        cin >> a >> b >> c;
        if (a==-1 && b==-1 && c==-1) break;
        cout << "w(" << a << ", " << b << ", " << c << ") = " << f(a, b, c) << "\n";
    }
    return 0;
}