# 27875 파이파이 (1)

from decimal import Decimal, getcontext
import math

def bbp_formula(n: int):
    getcontext().prec = n + 2
    one_sixteenth = Decimal("1") / Decimal("16")
    pi = Decimal("0")
    k = 0
    while True:
        term = one_sixteenth**k
        pi_k = term * (
            Decimal("8") / Decimal(str(8 * k + 1)) ** 2
            - Decimal("8") / Decimal(str(8 * k + 2)) ** 2
            - Decimal("4") / Decimal(str(8 * k + 3)) ** 2
            - Decimal("8") / Decimal(str(8 * k + 4)) ** 2
            - Decimal("2") / Decimal(str(8 * k + 5)) ** 2
            - Decimal("2") / Decimal(str(8 * k + 6)) ** 2
            + Decimal("1") / Decimal(str(8 * k + 7)) ** 2
        )
        pi += pi_k
        if pi_k < 16 ** (-n):
            break
        k += 1
    return pi

def get_nth_hex_digit_of_pi(n):
    pi = bbp_formula(n + 1)
    pi_shifted = pi * (16**n)
    nth_digit = int(pi_shifted) % 16
    return format(nth_digit, "X")


n = int(input())
for i in range(1, n + 1):
        print(bbp_formula(i) * 2)
print(math.pi ** 2)