import sys

dp = [0] * 1002

dp[0] = 1
dp[1] = 1
dp[2] = 3

for i in range(3, 1002):
    dp[i] = ((dp[i - 2] * 2) + dp[i - 1]) % 10007

a = int(sys.stdin.readline())
print(dp[a])