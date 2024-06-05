import sys

arr = [0] * 26
a = str(sys.stdin.read())
a = a.upper()

for i in range(len(a)):
  if ord(a[i]) >= ord('A') and ord(a[i]) <= ord('Z'):
    arr[ord(a[i]) - ord('A')] += 1

for i in range(26):
  print(chr(ord('A') + i) + " | ", end="")
  for i in range(arr[i]):
    print("*", end="")
  print()
