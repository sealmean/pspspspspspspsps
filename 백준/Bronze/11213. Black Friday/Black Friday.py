n = int(input())
ls = list(map(int, input().split()))
c = [0] * 7

for num in ls:
    c[num] += 1

mmax = -1
for num in range(6, 0, -1):
    if c[num] == 1:
        mmax = num
        break

if mmax != -1:
    print(ls.index(mmax) + 1)
else:
    print("none")