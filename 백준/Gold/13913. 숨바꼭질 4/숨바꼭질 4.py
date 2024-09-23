from collections import deque
from collections import defaultdict

def funn(n, k):
    visited = [-1] * 100001
    count = defaultdict(int)
    q = deque([n])
    
    visited[n] = 0
    count[n] = -1

    while q:
        pos = q.popleft()

        for next in [pos * 2, pos - 1, pos + 1]:
            if 0 <= next <= 100000 and visited[next] == -1:
                visited[next] = visited[pos] + 1
                count[next] = pos
                q.append(next)

    return visited[k], count

n, k = map(int, input().split())

min_time, ways = funn(n, k)
print(min_time)

path = []
current = k
while current != -1:
    path.append(current)
    current = ways[current]
path.reverse()
print(*path)