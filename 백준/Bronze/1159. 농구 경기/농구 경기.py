t = int(input())
ls = {}
for _ in range(t):
    a = input()[0]
    if a in ls:
        ls[a] += 1
    else:
        ls[a] = 1
sorls = sorted(ls.items())
ans = ''
for al,num in sorls:
    if num >= 5:
        ans = ans+al
if ans == '':
    print("PREDAJA")
else:
    print(ans)