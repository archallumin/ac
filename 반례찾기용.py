N, M = map(int, input("").split())
half_div_count = 0
result = 0
a = True

while a:
    if (N % 2) == 0:
        N = N // 2
        half_div_count += 1
    elif (M % 2) == 0:
        M = M // 2
        half_div_count += 1
    else:
        a = False

if half_div_count >= 1:
    for i in range(0, half_div_count):
        result += 2 ** (i)
    if N == 1:
        result += (2**half_div_count) * (M - 1)
        print(result)
    elif M == 1:
        result += (2**half_div_count) * (N - 1)
        print(result)
    else:
        result += (2**half_div_count) * (N - 1) * (M - 1)
        print(result)
else:
    print((N - 1) + N * (M - 1))
