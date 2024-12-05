n, h, w = map(int, input().split())
g = [input().strip() for _ in range(h)]
r = []

for i in range(n):
    s = set()
    for j in range(h):
        for c in g[j][i * w:(i + 1) * w]:
            if c != '?':
                s.add(c)
    r.append(s.pop() if len(s) == 1 else '?')

print(''.join(r))
