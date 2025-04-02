import math

n = int(input().strip())
points = []
for _ in range(n):
    x, y = map(float, input().strip().split())
    points.append((x, y))

m = int(input().strip())
for _ in range(m):
    p = int(input().strip())
    index = list(map(int, input().strip().split()))
    total = 0.0
    
    for i in range(p-1):
        a = index[i]
        b = index[i+1]
        x1, y1 = points[a]
        x2, y2 = points[b]
        dx = x2 - x1
        dy = y2 - y1
        total += math.hypot(dx, dy)
    
    print(round(total))
