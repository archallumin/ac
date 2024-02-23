a, b, c = "abc"
for i in range(20):
    a, b, c = b, c, a + b + c
print(c)
