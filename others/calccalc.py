a, mod = map(int, input().split())

for i in range(0, a + 1):
    print(
        (
            ((13 * (i**5)) * (((i + 6) * (i + 2))))
            + ((i**3) ** (i**2)) * (3 * (i * 7)) * (i**9)
            + (i + (i * 2))
            + 2
        )
        # % mod
    )
