import decimal
import sys

decimal.getcontext().prec = 40
t = int(sys.stdin.readline())
for i in range(1, t + 1):
    q = int(sys.stdin.readline())

    print(
        f'Case #{i}: {decimal.getcontext().power(decimal.Decimal(str(q)), decimal.Decimal("0.5"))}'
    )
