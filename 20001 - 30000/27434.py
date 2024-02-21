import sys

sys.set_int_max_str_digits(2147483647)
a = int(sys.stdin.readline())

res = 1
for i in range(1, a + 1, 1):
    res *= i
print(res)
