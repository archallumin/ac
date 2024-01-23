import sys

for i in range(3):
    count = 0
    t = int(sys.stdin.readline())
    for j in range(t):
        a = int(sys.stdin.readline())
        count += a
    if count > 0:
        print("+")
    else:
        if count == 0:
            print("0")
        else:
            print("-")