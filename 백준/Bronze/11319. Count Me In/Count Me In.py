v = {'a','e','i','o','u','A','E','I','O','U'}
s = int(input())
for _ in range(s):
    t = input().strip()
    c = 0
    vc = 0
    for x in t:
        if x in v:
            vc += 1
        elif x != ' ':
            c += 1
    print(c, vc)