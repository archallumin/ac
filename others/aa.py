from sys import stdin, stdout

input = stdin.readline
print = stdout.write

t = int(input())

for i in range(t):
  a = int(input())
  if a == 1:
    q, r = map(int, input().split())
    print(f"{q} * {r} = {q * r}\n\n")
  else:
    n, m, b = map(int, input().split())
    print(f"Board of {n} ~ {m}, {b}\n")
    for q in range(n, m + 1):
      print("+"+("-" * 33) + "+" + ("-" * 33)+"+" + "\n")
      print((f"| {q} * n").ljust(23))
      print((f"|").center(23))
      print((f"(1 ~ {b//2}, {b//2+1} ~ {b}) |").rjust(23) + "\n")
      print("+"+("-" * 33) + "+" + ("-" * 33)+"+" + "\n")
      for j in range(1, (b//2)+1):
        print(f"| {q} * {j} = {q * j}".ljust(25))
        print("|".center(19))
        print(f"{q} * {j + b//2} = {q * (j + b//2)} |".rjust(25) + "\n")
    print("+"+("-" * 33) + "+" + ("-" * 33)+"+" + "\n\n")