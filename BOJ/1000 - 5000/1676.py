import sys
import math
input = sys.stdin.readline

a = int(input())
count = 0
number = math.factorial(a)
while number % 10 == 0:
    number = number // 10
    count = count + 1
print(count)