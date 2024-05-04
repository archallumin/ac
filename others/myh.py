import sys
sys.set_int_max_str_digits(2147483647)

def power(a, b):
    if b == 0:
        return 1
    z = pow(a, b//2, c)
    if b%2 == 0:
        return z ** 2
    else:
        return (z ** 2) * a
    
a, b, c = map(int, input().split())

print(power(a, b) % c)