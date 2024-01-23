import sys

a = int(sys.stdin.readline())
cnt = 0
A = 0

while (1):
    A += 1
    if(str(A).find("666") != -1):
        cnt += 1
    if (cnt == a):
        break

print(A)