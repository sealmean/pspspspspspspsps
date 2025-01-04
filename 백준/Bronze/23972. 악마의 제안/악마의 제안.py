k,n = map(int,input().split())
if n<=1:
    print(-1)
else:
    print((k * n + n - 2) // (n - 1))