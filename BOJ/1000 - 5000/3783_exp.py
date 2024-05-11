import decimal

ctx = decimal.getcontext()
ctx.prec = 1000

a = 27
res = f'{ctx.power(decimal.Decimal(a),decimal.Decimal(decimal.Decimal("1") / decimal.Decimal("3"))):.101f}'
print(res[:-91])
