import sys

t = int(sys.stdin.readline())
for i in range(t):
    a = str(sys.stdin.readline().rstrip())
    if a[-1] == ".":
        print(a)
    else:
        print(a + ".")
