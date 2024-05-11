import sys

t = int(sys.stdin.readline())
for i in range(t):
    a, b = sys.stdin.readline().split()
    aint = int(a, 2)
    bint = int(b, 2)
    res = format(aint + bint, "b")
    print(res)
