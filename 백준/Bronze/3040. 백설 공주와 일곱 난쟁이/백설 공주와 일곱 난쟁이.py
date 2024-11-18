import itertools
ls = []
for i in range(9):
    a = int(input())
    ls.append(a)

tmp = itertools.permutations(ls,7)
for i in tmp:
    if sum(i) == 100:
        for j in i:
            print(j)
        break