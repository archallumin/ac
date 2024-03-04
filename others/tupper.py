from math import floor

a = int(input())

for i in range(1, a + 1):
    b, c, d = map(int, input().split())

    def tupper(x, y):
        return 0.5 < floor((y // b // (2 ** ((b * floor(x)) + (floor(y) % b)))) % 2)

    k = d
    print("Case #", i, sep="")
    print(b, "x", c)
    for y in range(k, k + b):
        for x in range(c - 1, -1, -1):
            if tupper(x, y):
                print("##", end="")
            else:
                print("..", end="")
        print("")
    print("")
