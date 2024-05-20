from time import time
from sys import stdin, stdout

start = int(round(time()*1000))

input = stdin.readline
print = stdout.write

a = int(input())
b = a//2

for i in range(1, a+1):
  print(("-" * 28) + "+" + ("-" * 28) + "\n")
  print((f"{i} * n").ljust(57) + "\n")
  #print("|".center(48))
  print(("-" * 28) + "+" + ("-" * 28) + "\n")
  for j in range(1, b+1):
    print(f"{i} * {j} = {i * j}".ljust(19))
    print("|".center(19))
    print(f"{i} * {j + b} = {i * (j + b)}".rjust(19) + "\n")
print(f"\nTime: {int(round(time()*1000)) - start}ms\n")