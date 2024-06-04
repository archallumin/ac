import math

def ip(x):
    for i in range (2, int(math.sqrt(x) + 1)):
        if x % i == 0:
            return False
    return True

for i in range(2,1000):
    if ip(6 * i + 1) and ip(12 * i + 1) and ip(18 * i + 1):
        print(f"{6*i+1}, {12*i+1}, {18*i+1}, {(6*i+1)*(12*i+1)*(18*i+1)}")