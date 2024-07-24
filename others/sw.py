import decimal

decimal.getcontext().prec = 10000

print(decimal.Decimal("1") / decimal.Decimal("905"))
