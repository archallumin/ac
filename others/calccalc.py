from decimal import Decimal, getcontext

n = int(input())

arr = []
res = Decimal()
getcontext().prec = 100
d = 0

for k in range(n+1):
    nums = [8,-8,-4,-8,-2,-2,1]
    denoms = [(8*k+1)**2, (8*k+2)**2, (8*k+3)**2, (8*k+4)**2, (8*k+5)**2, (8*k+6)**2, (8*k+7)**2]
    term = sum((Decimal(a) / b) for a, b in zip(nums, denoms))
    res += term * (Decimal(16) ** -k) * 2
    res2 = res - int(res)
    res2 *= 16 ** n

print(format(int(res2) % 16, 'X'), end="")