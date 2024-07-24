t = int(input())

for i in range(t):
    a, b = map(str, input().split())
    for k in range(len(b)):
        if k != int(a) - 1:
            print(b[k], end="")
    print()
