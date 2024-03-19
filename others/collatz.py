# -*- coding: utf-8 -*-
"""
Created on Wed Dec  11 23:12:01 2019

@author:  Anton
ORCID iD: https://orcid.org/0000-0002-0559-0981

Download: https://www.python.org/downloads/
"""

# Python recipe to check for lucky number (less than 1 000 000).
# Q: What is lucky number?
#
# A: Write out all odd numbers: 1, 3, 5, 7, 9, 11, 13, 15, 17, 19, ....
#    The first odd number >1 is 3, so strike out every third number from the list: 1, 3, 7, 9, 13, 15, 19, ....
#    The first odd number greater than 3 in the list is 7, so strike out every seventh number: 1, 3, 7, 9, 13, 15, 21, 25, 31, ....
#    Numbers remaining after this procedure has been carried out completely are called lucky numbers.
#    The first few are 1, 3, 7, 9, 13, 15, 21, 25, 31, 33, 37, ....


# Returns 1 if n < 1 000 000 is a lucky number otherwise returns 0
def is_lucky(n):
    lucky = list(range(1, n + 37, 2))
    current_index = 1

    while lucky[current_index] < len(lucky):
        current = lucky[current_index]
        new = []

        for i in range(current - 1, len(lucky) + current, current):
            new += lucky[i - current + 1 : i]

        lucky = new
        current_index += 1
    if n in lucky:
        return 1
    else:
        return 0


for i in range(1, 1000000 + 1):
    if is_lucky(i):
        print("1", end="")
    else:
        print("0", end="")
    if i % 100 == 0:
        print()
