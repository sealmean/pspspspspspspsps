x1, y1 = map(int, input().split())
x2, y2 = map(int, input().split())
x3, y3 = map(int, input().split())

# 벡터 외적
cross_product = (x2 - x1) * (y3 - y2) - (y2 - y1) * (x3 - x2)

if cross_product > 0:
    print(1) 
elif cross_product < 0:
    print(-1)
else:
    print(0)
