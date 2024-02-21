import sys
a, b, c = map(int, sys.stdin.readline().split())

def power(a, b):
    if b == 0:
        return 1
    z = pow(a, b//2, c)
    if b%2 == 0:
        return z ** 2
    else:
        return (z ** 2) * a

print(power(a, b) % c)