import decimal
import sys

ctx = decimal.getcontext()
ctx.prec = 1100

t = int(sys.stdin.readline())

for i in range(t):
    a = str(sys.stdin.readline())
    res = f'{ctx.power(decimal.Decimal(a),decimal.Decimal(decimal.Decimal("1") / decimal.Decimal("3"))):.101f}'
    print(res[:-91])
