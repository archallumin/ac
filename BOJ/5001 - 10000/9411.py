import sys
import decimal

cnt = 0
totsum = 0
t = int(sys.stdin.readline())

decimal.getcontext().prec = 300


def remove_exponent(num):
    return num.to_integral() if num == num.to_integral() else num.normalize()


while cnt != t:
    a = sys.stdin.readline().rstrip()
    totsum += decimal.Decimal(str(a))
    if str(a) == "0":
        st = str(totsum)
        print(remove_exponent(decimal.Decimal(st)))
        cnt += 1
        totsum = 0
