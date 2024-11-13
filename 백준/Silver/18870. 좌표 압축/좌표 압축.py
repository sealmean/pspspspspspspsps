import sys
input = sys.stdin.readline

n = int(input())
ls = list(map(int, input().split()))
lscount = sorted(list(set(ls)))
dic = {lscount[i] : i for i in range(len(lscount))}
for i in ls:
    print(dic[i], end = ' ')