import decimal

decimal.getcontext().prec = 1000
a = int(input())

for i in range(a):
    x, y, z, w = map(str, input().split())
    d = f"{((decimal.getcontext().power(decimal.Decimal(str(x)), decimal.Decimal('0.5')) * decimal.Decimal('0.055')+ decimal.Decimal(str(y))) * decimal.Decimal(str(z)) * (decimal.Decimal('1') / decimal.Decimal(str(w)))):.400f}"
    print(d[:-350])
