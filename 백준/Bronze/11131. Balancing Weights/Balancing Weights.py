t = int(input())
for _ in range(t):
    n = int(input())
    w = list(map(int, input().split()))
    s = sum(w) * 100
    if s < 0:
        print("Left")
    elif s > 0:
        print("Right")
    else:
        print("Equilibrium")