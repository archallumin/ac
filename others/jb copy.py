import sys

num_list = "abcdefghijklmnopqrstuvwxyz"

b = int(sys.stdin.readline())
n = str(sys.stdin.readline())
ans = 0
for i, num in enumerate(n[::-1]):
    ans += int(b) ** i * num_list.index(num)


def convert(n, base):
    T = "abcdefghijklmnopqrstuvwxyz"
    q, r = divmod(n, base)
    if q == 0:
        return T[r]
    else:
        return convert(q, base) + T[r]


print(convert(ans, 26).rjust(13, 'a'))