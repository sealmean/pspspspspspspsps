import sys
import heapq
input = sys.stdin.readline

n = int(input())
ls = []
for i in range(n):
    a = int(input())
    heapq.heappush(ls,a)
ans = 0
for i in range(n-1):
    tmp = heapq.heappop(ls) + heapq.heappop(ls)
    ans += tmp
    heapq.heappush(ls,tmp)
print(ans)