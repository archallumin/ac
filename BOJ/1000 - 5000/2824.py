import sys
import math

A = 0
B = 0


def multiply(arr):
    ans = 1
    for n in arr:
        if n == 0:
            return 0
        ans *= n
    return ans


a = int(sys.stdin.readline())
k = list(map(int, sys.stdin.readline().split()))
A += multiply(k)
b = int(sys.stdin.readline())
k = list(map(int, sys.stdin.readline().split()))
B += multiply(k)
print(str(math.gcd(A, B))[-9:])
