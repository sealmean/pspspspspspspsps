t = int(input())
ls = list(map(int,input().split()))
ans = 0
for i in ls:
    ans += i**2
print(f"{ans / 2:.18f}")