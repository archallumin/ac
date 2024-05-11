hcnt = 0
cnt = 0

for i in range(4):
    a = int(input())
    cnt += a
while cnt >= 60:
    hcnt += 1
    cnt -= 60
print(hcnt)
print(cnt)
