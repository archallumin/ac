import sys

tmp = "0123456789ABCDEFGHIJKLMNOPQRSTUVWXYZ"

def convert (a, b):
  x, y = divmod(a, b)
  if x == 0:
    return tmp[y]
  else:
    return convert(x, b) + tmp[y]

a, b = map(str, sys.stdin.readline().split())

print(convert(int(a), int(b)))