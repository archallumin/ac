import sys


def fib(a):
    fibo = [0, 1]
    for i in range(2, a + 1):
        fibo.append(fibo[i - 1] + fibo[i - 2])
    return fibo[-1]


a = int(sys.stdin.readline())

if a == 0:
    print("0")
else:
    print(fib(a))
