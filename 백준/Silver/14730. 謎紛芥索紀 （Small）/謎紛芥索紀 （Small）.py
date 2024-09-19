n = int(input())
ans = 0
for i in range(n):
    a,b = map(int,input().split())
    ans += a*b*1**b
print(ans)