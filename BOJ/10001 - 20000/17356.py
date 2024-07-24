a, b = map(int, input().split())

print(f"{1 / (1 + (10 ** ((b - a) / 400))):.10f}")
