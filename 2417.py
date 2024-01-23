import sys

a = int(sys.stdin.readline())
cnt = int(a ** 0.5)

while (cnt * cnt < a):
    cnt += 1

print(cnt)