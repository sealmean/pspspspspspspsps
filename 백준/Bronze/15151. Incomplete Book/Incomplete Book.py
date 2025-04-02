k, d = map(int,input().split())
l = 0
r = 60
ans = 0

while l <= r:
    m = (l + r) // 2
    total = k * (2 ** m - 1)
    
    if total <= d:
        ans = m
        l = m + 1
    else:
        r = m - 1

print(ans)