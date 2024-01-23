import sys

def fib(a):
    fibo = [0, 1]
    for i in range (2, a + 1):
        fibo.append((fibo[i - 1] + fibo[i - 2]) % 1000000)
    return fibo[-1]

a = int(sys.stdin.readline())

print(fib(a % 1500000))