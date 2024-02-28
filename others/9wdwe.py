w = int(input())
print("YNEOS"[(w % 2) | (w <= 2) :: 2])
