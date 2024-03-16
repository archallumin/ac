import string

tmp = string.digits + string.ascii_uppercase


def convert(num, base):
    q, r = divmod(num, base)
    if q == 0:
        return tmp[r]
    else:
        return convert(q, base) + tmp[r]


for i in range(500001):
    print(i, end=" ")
    print(convert(i, 36))
