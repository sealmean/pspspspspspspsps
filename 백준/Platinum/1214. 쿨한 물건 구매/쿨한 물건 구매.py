import sys
input = sys.stdin.readline

d, p, q = map(int, input().split())
if p > q:
    a, b = p, q
else:
    a, b = q, p

ans = 10e9

for i in range(d // a + 1):
    if (b - (d - a * i) % b) == b:
        ans = 0
        break
    else:
        ans = min(ans, (b - (d - a * i) % b) % b)

ans = min(ans, (a - (d % a)) % a)
print(d + ans)