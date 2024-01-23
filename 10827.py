import decimal
import sys

a, b = map(str, sys.stdin.readline().split())

decimal.getcontext().prec = 10000
print("{0:f}".format(decimal.Decimal(a) ** int(b)))
