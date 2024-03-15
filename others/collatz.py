n = 10000000000000

print(n)
while True:
    if n == 1:
        break
    if n % 2 == 0:
        n //= 2
        print(n)
    else:
        n = (n * 3) + 1
        print(n)
