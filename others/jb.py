import sys

num_list = "!\"#$%&'()*+,-./0123456789:;<=>?@ABCDEFGHIJKLMNOPQRSTUVWXYZ[\]^_`abcdefghijklmnopqrstuvwxyz{|}"

b = int(sys.stdin.readline())
n = str(sys.stdin.readline())
answer = 0
for i, num in enumerate(n[::-1]):
    answer += int(b) ** i * num_list.index(num)
print(answer)
