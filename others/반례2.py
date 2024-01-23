ax, ay = map(int, input().split())
bx, by = map(int, input().split())
cx, cy = map(int, input().split())
a = (bx - ax) ** 2 + (by - ay) ** 2
b = (bx - cx) ** 2 + (by - cy) ** 2
c = (cx - ax) ** 2 + (cy - ay) ** 2

mm = True
if (
    a ** (0.5) + b ** (0.5) <= c ** (0.5)
    or c ** (0.5) + b ** (0.5) <= a ** (0.5)
    or c ** (0.5) + a ** (0.5) <= b ** (0.5)
):
    print("X")
    mm = False


if mm:
    if (
        (bx - ax) ** 2 + (by - ay) ** 2
        == (cx - ax) ** 2 + (cy - ay) ** 2
        == (bx - cx) ** 2 + (by - cy) ** 2
    ):
        print("JungTriangle")
    if (
        (bx - ax) ** 2 + (by - ay) ** 2
        != (cx - ax) ** 2 + (cy - ay) ** 2
        != (bx - cx) ** 2 + (by - cy) ** 2
    ):  # 모두 다를ㄸ0
        if a + b == c or c + b == a or c + a == b:
            print("JikkakTriangle")  # 직각

        elif a + b < c or c + b < a or c + a < b:
            print("DunkakTriangle")
        else:
            print("YeahkakTriangle")

    else:
        if a + b == c or c + b == a or c + a == b:
            print("Jikkak2Triangle")  # 직각

        elif a + b < c or c + b < a or c + a < b:
            print("Dunkak2Triangle")
        else:
            print("Yeahkak2Triangle")
