import decimal
a = decimal.Decimal("1")
decimal.getcontext().prec = 10
for i in range(2, 10000):
    a *= decimal.Decimal(str(decimal.Decimal(6+((i ** (1/decimal.Decimal(i ** 3))) + (i * (i - decimal.Decimal(1/12)))))))
    print(f'{a:.0f}')