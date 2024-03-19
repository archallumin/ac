import time

seed = int(time.time() * 1000)


def pseudo_random():
    global seed
    a = 1103515245
    c = 12345
    m = 2**31
    seed = (a * seed + c) % m
    return seed


def random_int(min_val, max_val):
    return min_val + pseudo_random() % (max_val - min_val + 1)


for i in range(6):
    print(random_int(1, 45))
