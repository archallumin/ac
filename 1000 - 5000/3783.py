import decimal
import sys

ctx = decimal.getcontext()
ctx.prec = 800
li = []


li = list(map(str, sys.stdin.read().split()))
for i in range(len(li)):
    res = f'{ctx.power(decimal.Decimal(li[i]),decimal.Decimal(decimal.Decimal("1") / decimal.Decimal("3"))):.101f}'
    print(res[:-91])
