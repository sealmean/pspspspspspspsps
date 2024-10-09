from collections import deque

def bfs(city, start, k, visited):
    queue = deque([start])
    visited[start] = 1
    last = []
    
    while queue:
        v = queue.popleft()
        for i in city[v]:
            if visited[i] == 0:
                visited[i] = visited[v] + 1
                queue.append(i)
                if visited[i] == k + 1:
                    last.append(i)
    
    return last

n, m, k, x = map(int, input().split())
city = [[] for _ in range(n + 1)]

for _ in range(m):
    a, b = map(int, input().split())
    city[a].append(b)

visited = [0] * (n + 1)
result = bfs(city, x, k, visited)

if len(result) == 0:
    print(-1)
    
else:
    result.sort()
    for r in result:
        print(r)
