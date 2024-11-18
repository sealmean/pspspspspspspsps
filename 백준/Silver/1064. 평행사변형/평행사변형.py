import math

def distance(x1, y1, x2, y2):
    return math.sqrt((x2 - x1) ** 2 + (y2 - y1) ** 2)

def fun(x1, y1, x2, y2, x3, y3):
    return (y2 - y1) * (x3 - x2) == (y3 - y2) * (x2 - x1)

xA, yA, xB, yB, xC, yC = map(int, input().split())

if fun(xA, yA, xB, yB, xC, yC):
    print(-1.0)
else:
    ls = []
    
    # D = B + (C - A)
    xD1, yD1 = xB + (xC - xA), yB + (yC - yA)
    p1 = 2 * (distance(xA, yA, xB, yB) + distance(xB, yB, xC, yC))
    ls.append(p1)
    
    # D = C + (B - A)
    xD2, yD2 = xC + (xB - xA), yC + (yB - yA)
    p2 = 2 * (distance(xA, yA, xC, yC) + distance(xC, yC, xB, yB))
    ls.append(p2)
    
    # D = A + (C - B)
    xD3, yD3 = xA + (xC - xB), yA + (yC - yB)
    p3 = 2 * (distance(xB, yB, xA, yA) + distance(xA, yA, xC, yC))
    ls.append(p3)
    
    print(max(ls) - min(ls))
