import sys


def fib(a):
    fibo = [0, 1]
    for i in range(2, a + 1):
        fibo.append(fibo[i - 1] + fibo[i - 2])
    return fibo[-1]


sys.set_int_max_str_digits(1000000000)
a = int(sys.stdin.readline())

print(fib(a))
