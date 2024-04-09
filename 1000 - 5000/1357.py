import sys

a, b = map(str, sys.stdin.read().split())

print(str(int(a[::-1]) + int(b[::-1])).rstrip("0")[::-1])
