from collections import deque
import sys
input = sys.stdin.readline

n, m = map(int, input().split())
table = []

dx = [1, -1, 0, 0]
dy = [0, 0, 1, -1]
visited = [[False] * m for _ in range(n)]
ans = 0

for i in range(n):
    row = list(input().rstrip())
    for j in range(m):
        if row[j] == 'I':
            start = (i, j)
    table.append(row)

dx = [1, -1, 0, 0]
dy = [0, 0, 1, -1]
visited = [[False] * m for _ in range(n)]
ans = 0

q = deque()
q.append(start)
visited[start[0]][start[1]] = True

while q:
    x, y = q.popleft()
    
    for i in range(4):
        nx, ny = x + dx[i], y + dy[i]
        
        if 0 <= nx < n and 0 <= ny < m:
            if table[nx][ny] != 'X' and not visited[nx][ny]:
                q.append((nx, ny))
                visited[nx][ny] = True
                
                if table[nx][ny] == 'P':
                    ans += 1
                    
print(ans if ans > 0 else 'TT')
