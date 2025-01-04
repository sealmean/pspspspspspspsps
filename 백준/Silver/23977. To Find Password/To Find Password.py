from math import lcm
k,n = map(int,input().split())
ls = list(map(int,input().split()))
print(lcm(*ls)-k)