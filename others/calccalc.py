from decimal import Decimal, getcontext

getcontext().prec = 60
res = Decimal()
for k in range(1000):
    nums = [4, -2, -1,-1]
    denoms = [8*k+1, 8*k+4, 8*k+5, 8*k+6]
    term = sum(Decimal(a) / b for a, b in zip(nums, denoms))
    res += term * (Decimal(16) ** -k)
    print(k, format(int((str(res).split("."))[1]), 'X'))