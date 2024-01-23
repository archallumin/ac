import sys

t = int(sys.stdin.readline())

for i in range(t):
    a = int(sys.stdin.readline())
    c = 1
    for i in range(2, a + 1):
        c *= i
        while 1:
            if str(c)[-1] == "0":
                c //= 10
            else:
                break
    c %= 10000000000000000000000
    print(c % 10)
