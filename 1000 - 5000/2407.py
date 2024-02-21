import math
import sys

n, m = map(int, sys.stdin.readline().split())

print(int(math.factorial(n) // (math.factorial(n - m) * math.factorial(m))))
