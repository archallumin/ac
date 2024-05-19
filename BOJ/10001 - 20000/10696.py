import sys

a = int(sys.stdin.readline())

for _ in range(1,a+1):
  n,m=map(int, sys.stdin.readline().split())
  sys.stdout.write(f"Case {_}: {n % m}\n")