import random

print(15)
print("30 5 5 5 5 5 5 5 5 5 4 4 4 4 4")
for i in range(5 ** 4 + 5 ** 5 + 4 ** 4):
  for j in range(30):
    print(random.randint(0, 20),end=" ")
  print()

print(20)
for o in range(20):
  q = random.randint(1, 5)
  if q == 1:
    print(q, end=" ")
    print(random.randint(1, 30), end=" ")
    for i in range(3):
      print(random.randint(1, 5), end=" ")
    for i in range(6):
      print(random.randint(1, 5), end=" ")
    for i in range(5):
      print(random.randint(1, 4), end=" ")
    print(random.randint(0, 20), end=" ")
    print()
  if q == 2:
    print(q, end=" ")
    print(random.randint(1, 15), end=" ")
    for i in range(3):
      print(random.randint(1, 2), end=" ")
    for i in range(6):
      print(random.randint(1, 3), end=" ")
    for i in range(5):
      print(random.randint(1, 2), end=" ")
    print(random.randint(15, 30), end=" ")
    for i in range(3):
      print(random.randint(2, 5), end=" ")
    for i in range(6):
      print(random.randint(3, 5), end=" ")
    for i in range(5):
      print(random.randint(2, 4), end=" ")
    print(random.randint(0, 20), end=" ")
    print()
  if q == 3:
    print(q, end=" ")
    print(random.randint(1, 15), end=" ")
    for i in range(3):
      print(random.randint(1, 2), end=" ")
    for i in range(6):
      print(random.randint(1, 3), end=" ")
    for i in range(5):
      print(random.randint(1, 2), end=" ")
    print(random.randint(15, 30), end=" ")
    for i in range(3):
      print(random.randint(2, 5), end=" ")
    for i in range(6):
      print(random.randint(3, 5), end=" ")
    for i in range(5):
      print(random.randint(2, 4), end=" ")
    print(random.randint(1, 10), end=" ")
    print()
  if q == 4:
    print(q, end=" ")
    print(random.randint(1, 15), end=" ")
    for i in range(3):
      print(random.randint(1, 2), end=" ")
    for i in range(6):
      print(random.randint(1, 2), end=" ")
    for i in range(5):
      print(random.randint(1, 2), end=" ")
    print(random.randint(15, 30), end=" ")
    for i in range(3):
      print(random.randint(2, 5), end=" ")
    for i in range(6):
      print(random.randint(2, 5), end=" ")
    for i in range(5):
      print(random.randint(2, 4), end=" ")
    print()
  if q == 5:
    print(q, end=" ")
    print(random.randint(1, 15), end=" ")
    for i in range(3):
      print(random.randint(1, 2), end=" ")
    for i in range(6):
      print(random.randint(1, 2), end=" ")
    for i in range(5):
      print(random.randint(1, 2), end=" ")
    print(random.randint(15, 30), end=" ")
    for i in range(3):
      print(random.randint(2, 5), end=" ")
    for i in range(6):
      print(random.randint(2, 5), end=" ")
    for i in range(5):
      print(random.randint(2, 4), end=" ")
    print()