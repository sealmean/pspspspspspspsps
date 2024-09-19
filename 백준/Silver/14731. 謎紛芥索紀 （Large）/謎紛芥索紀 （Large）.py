MOD = 10**9 + 7

n = int(input())
ans = 0

for i in range(n):
    a, b = map(int, input().split())
    power_of_two = pow(2, b-1, MOD)
    ans = (ans + (a * b * power_of_two) % MOD) % MOD

print(ans)
