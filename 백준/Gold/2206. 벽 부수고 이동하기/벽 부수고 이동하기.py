import sys
from collections import deque
input = sys.stdin.readline

n, m = map(int, input().split())

table = []
for _ in range(n):
    table.append(list(map(int, input().strip())))

visited = [[[0] * 2 for _ in range(m)] for _ in range(n)]
visited[0][0][0] = 1

dx = [1, -1, 0, 0]
dy = [0, 0, 1, -1]

def bfs():
    q = deque()
    q.append([0, 0, 0])

    while q:
        x, y, w = q.popleft()

        for i in range(4):
            nx = x + dx[i]
            ny = y + dy[i]

            # 그리드 범위를 벗어나면 continue
            if nx < 0 or nx >= n or ny < 0 or ny >= m:
                continue

            # 벽을 만나고 벽을 부수지 않았을 때
            if table[nx][ny] == 1 and w == 0 and visited[nx][ny][1] == 0:
                visited[nx][ny][1] = visited[x][y][0] + 1
                q.append([nx, ny, 1])

            # 벽이 아니고 방문하지 않은 경우
            if table[nx][ny] == 0 and visited[nx][ny][w] == 0:
                visited[nx][ny][w] = visited[x][y][w] + 1
                q.append([nx, ny, w])

    # 큐가 모두 돈 후, 도착지의 두 경우를 비교
    if visited[n-1][m-1][0] != 0 and visited[n-1][m-1][1] != 0:
        return min(visited[n-1][m-1][0], visited[n-1][m-1][1])
    elif visited[n-1][m-1][0] != 0:
        return visited[n-1][m-1][0]
    elif visited[n-1][m-1][1] != 0:
        return visited[n-1][m-1][1]
    else:
        return -1  # 도착할 수 없는 경우

print(bfs())
