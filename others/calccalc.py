import sys

cnt = 0
sys.set_int_max_str_digits(1000000007)

input = sys.stdin.readline
n = int(input())
c = 75
x = 5


for k in range(1, n):
    c, x = c * 5 + x * 50, c

for i in range(len(str(c))):
    if str(c)[i] == "6":
        cnt += 1
    else:
        break

print(cnt)
