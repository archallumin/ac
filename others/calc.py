import math
def primenumber(x):
    for i in range (2, int(math.sqrt(x) + 1)):
        if x % i == 0:
            return False
    return True	


print(18 * 35 + 1)