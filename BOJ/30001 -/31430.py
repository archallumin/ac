import sys

t = int(sys.stdin.readline())

if t == 1:
    a, b = map(int, sys.stdin.readline().split())
    ans = a + b
    def convert(n, base):
        T = "abcdefghijklmnopqrstuvwxyz"
        q, r = divmod(n, base)
        if q == 0:
            return T[r]
        else:
            return convert(q, base) + T[r]
    print(convert(ans, 26).rjust(13, 'a'))
else:
    num_list = "abcdefghijklmnopqrstuvwxyz"
    n = str(sys.stdin.readline()).rstrip()
    ans2 = 0
    for i, num in enumerate(n[::-1]):
        ans2 += int(26) ** i * num_list.index(num)
    print(ans2)