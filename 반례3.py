N, L, D = map(int, input().split())

if N * L + (N - 1) * 5 <= D:
    print(N * L + (N - 1) * 5)
else:
    for i in range(1, N + 1):
        L = L * i + 5
        D = D * i
        if L > D:
            print(D)
            break
