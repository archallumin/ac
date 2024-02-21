cnt = 0
for i in range(6666666, 66666666):
    a = i * 15
    indexcnt = 0
    for j in range(0, len(str(a))):
        if int(str(a)[j]) == 1 or int(str(a)[j]) == 5:
            indexcnt += 1
        if indexcnt == len(str(a)):
            print(f"{a} ")
            cnt += 1
print(cnt)
