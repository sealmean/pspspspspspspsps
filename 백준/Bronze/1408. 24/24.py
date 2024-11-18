h1, m1, s1 = map(int, input().split(':'))
t1 = h1 * 3600 + m1 * 60 + s1

h2, m2, s2 = map(int, input().split(':'))
t2 = h2 * 3600 + m2 * 60 + s2

ans = t2 - t1

if ans < 0:
    ans += 24 * 3600

h = ans // 3600
m = (ans % 3600) // 60
s = ans % 60

print(f"{h:02}:{m:02}:{s:02}")
