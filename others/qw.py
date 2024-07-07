for i in range(1, 201):
    print(
        f"-----------------------|--------------------\n{i} * n\n-----------------------|--------------------"
    )
    for j in range(1, 101):
        print(f"{i} * {j} = {i * j}".ljust(16), end="")
        print("|".center(16), end="")
        print(f"{i} * {j + 100} = {i * (j + 100)}".rjust(16))
