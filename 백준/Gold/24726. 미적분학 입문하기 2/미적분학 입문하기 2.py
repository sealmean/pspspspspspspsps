import math

def fun(x1, y1, x2, y2, x3, y3):
    return abs((x1*(y2 - y3) + x2*(y3 - y1) + x3*(y1 - y2)) / 2)

x1, y1, x2, y2, x3, y3 = map(int, input().split())

area = fun(x1, y1, x2, y2, x3, y3)

xc = (x1 + x2 + x3) / 3
yc = (y1 + y2 + y3) / 3

volume_x = 2 * math.pi * yc * area
volume_y = 2 * math.pi * xc * area

print(f"{volume_x:.9f} {volume_y:.9f}")
