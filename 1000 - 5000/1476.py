import sys

E, S, M = map(int, sys.stdin.readline().split())
e = 0
s = 0
m = 0
count = 0

while (1):
    count += 1
    e += 1
    s += 1
    m += 1
    if e > 15:
        e = 1
    if s > 28:
        s = 1
    if m > 19:
        m = 1
    if (e == E and s == S and m == M):
        break

print(count)