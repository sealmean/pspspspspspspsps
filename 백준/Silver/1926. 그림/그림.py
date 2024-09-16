from collections import deque

n,m = map(int,input().split())

graph = []

for _ in range(n):
    aa = list(map(int,input().split()))
    graph.append(aa)

def bfs(x, y):
    dx = [-1,1,0,0]
    dy = [0,0,-1,1]

    queue = deque()
    queue.append((x,y))
    graph[x][y] = 0
    count = 1

    while queue:
        x,y = queue.popleft()

        for i in range(4):
            nx = x + dx[i]
            ny = y + dy[i]

            if 0 <= nx < n and 0 <= ny < m and graph[nx][ny]==1:
                graph[nx][ny] = 0
                queue.append((nx,ny))
                count += 1

    return count

cnt = []

for i in range(n):
    for j in range(m):
        if graph[i][j] == 1:
            cnt.append(bfs(i, j))

print(len(cnt))

if not cnt: print(0)
else:print(max(cnt))