from collections import Counter

n = int(input())
for _ in range(n):
    m = int(input())
    left = list(map(int, input().split()))
    right = list(map(int, input().split()))
    lc = Counter(left)
    rc = Counter(right)
    cnt = 0
    for t in sorted(left):
        if lc[t] == 0:
            continue
        a = t + 500
        b = t + 1000
        c = t + 1500
        if lc[a] > 0 and rc[b] > 0 and rc[c] > 0:
            lc[t] -= 1
            lc[a] -= 1
            rc[b] -= 1
            rc[c] -= 1
            cnt += 1
    print(cnt)