from collections import deque

n, m = map(int, input().split())
graph = []

for i in range(n):
    graph.append(list(input().strip()))  # Remove trailing whitespace

dx = [0, 0, 1, -1]
dy = [1, -1, 0, 0]

def bfs(graph, start_x, start_y):
    visited = [[-1] * m for _ in range(n)]  # Initialize visited with -1 (unvisited)
    visited[start_x][start_y] = 0
    queue = deque([(start_x, start_y)])
    max_distance = 0

    while queue:
        x, y = queue.popleft()
        current_distance = visited[x][y]
        
        for i in range(4):
            nx, ny = x + dx[i], y + dy[i]
            if 0 <= nx < n and 0 <= ny < m and graph[nx][ny] == 'L' and visited[nx][ny] == -1:
                visited[nx][ny] = current_distance + 1
                queue.append((nx, ny))
                max_distance = max(max_distance, visited[nx][ny])
                
    return max_distance

ans = 0

for i in range(n):
    for j in range(m):
        if graph[i][j] == 'L':
            ans = max(ans, bfs(graph, i, j))

print(ans)
