t = int(input())

for kk in range(t):

    a = str(input())

    for i in range(len(a)):
        if a[i] == "+" or a[i] == "-" or a[i] == "*":
            sps = str(a[i])

    if sps != "*":
        ln = max(len(a.split(sps)[0]), len(a.split(sps)[1]) + 1)
    elif len(str(int(a.split(sps)[0]) * int(a.split(sps)[1]))) == 1:
        ln = len(str(int(a.split(sps)[0]) * int(a.split(sps)[1]))) + 1
    else:
        ln = len(str(int(a.split(sps)[0]) * int(a.split(sps)[1])))

    if sps == "+":
        barln = max(
            len(a.split(sps)[1]) + 1,
            len(str(int(a.split(sps)[0]) + int(a.split(sps)[1]))),
        )
    elif sps == "-":
        barln = max(
            len(a.split(sps)[1]) + 1,
            len(str(int(a.split(sps)[0]) - int(a.split(sps)[1]))),
        )
    elif sps == "*" and len(a.split(sps)[1]) == 1:
        barln = max(
            len(a.split(sps)[1]) + 1,
            len(str(int(a.split(sps)[0]) * int(a.split(sps)[1]))),
        )
    elif sps == "*" and len(a.split(sps)[1]) > 1:
        barln = len(a.split(sps)[1]) + 1
        barln2 = len(str(int(a.split(sps)[0]) * int(a.split(sps)[1])))

    if sps == "*" and len(a.split(sps)[0]) > 1:
        print(a.split(sps)[0].rjust(ln))
    else:
        print(a.split(sps)[0].rjust(barln))

    if sps == "+":
        print(("+" + a.split(sps)[1]).rjust(ln))
        print(("-" * barln).rjust(ln))
    elif sps == "-":
        print(("-" + a.split(sps)[1]).rjust(ln))
        print(("-" * barln).rjust(ln))
    elif sps == "*" and len(a.split(sps)[1]) == 1:
        print(("*" + a.split(sps)[1]).rjust(ln))
        print(("-" * barln).rjust(ln))
    elif sps == "*" and len(a.split(sps)[1]) > 1:
        print(("*" + a.split(sps)[1]).rjust(ln))
        print(
            (
                "-"
                * max(
                    len(
                        str(
                            int(a.split(sps)[0])
                            * int(str(a.split(sps)[1])[len(a.split(sps)[1]) - (1)])
                        )
                    ),
                    barln,
                )
            ).rjust(ln)
        )
        for i in range(len(a.split(sps)[1])):
            if len(a.split(sps)[0]) == 1:
                print(
                    str(
                        int(a.split(sps)[0])
                        * int(str(a.split(sps)[1])[len(a.split(sps)[1]) - (i + 1)])
                    ).rjust(barln - i)
                )
            else:
                print(
                    str(
                        int(a.split(sps)[0])
                        * int(str(a.split(sps)[1])[len(a.split(sps)[1]) - (i + 1)])
                    ).rjust(ln - i)
                )
        print(("-" * barln2).rjust(barln))

    if sps == "+":
        print(str(int(a.split(sps)[0]) + int(a.split(sps)[1])).rjust(ln))
    elif sps == "-":
        print(str(int(a.split(sps)[0]) - int(a.split(sps)[1])).rjust(ln))
    elif sps == "*":
        print(str(int(a.split(sps)[0]) * int(a.split(sps)[1])).rjust(barln))
    print()
