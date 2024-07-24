arr = [0] * 491
arr[0] = 0
arr[1] = 1

for i in range(2, 491):
    arr[i] = arr[i - 1] + arr[i - 2]


while 1:
    a = int(input())
    if a == -1:
        break
    print(f"Hour {a}: {arr[a]} cow(s) affected")
