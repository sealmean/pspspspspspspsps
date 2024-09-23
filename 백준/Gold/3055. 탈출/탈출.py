from collections import deque

n, m = map(int, input().split())
graph = [list(input().strip()) for _ in range(n)]

water_q = deque()
gosm_q = deque()
water_time = [[-1] * m for _ in range(n)]  # 물이 차는 시간
gosm_time = [[-1] * m for _ in range(n)]  # 고슴도치가 이동하는 시간

for i in range(n):
    for j in range(m):
        if graph[i][j] == 'S':  # 고슴도치 시작 위치
            gosm_q.append((i, j))
            gosm_time[i][j] = 0
        elif graph[i][j] == '*':  # 물의 위치
            water_q.append((i, j))
            water_time[i][j] = 0

dx = [-1, 1, 0, 0]
dy = [0, 0, -1, 1]

while water_q:
    x, y = water_q.popleft()

    for i in range(4):
        nx = x + dx[i]
        ny = y + dy[i]

        if 0 <= nx < n and 0 <= ny < m and graph[nx][ny] == '.' and water_time[nx][ny] == -1:
            water_time[nx][ny] = water_time[x][y] + 1
            water_q.append((nx, ny))

while gosm_q:
    x, y = gosm_q.popleft()

    for i in range(4):
        nx = x + dx[i]
        ny = y + dy[i]

        if 0 <= nx < n and 0 <= ny < m and graph[nx][ny] == 'D':
            print(gosm_time[x][y] + 1)
            exit()

        if 0 <= nx < n and 0 <= ny < m and graph[nx][ny] == '.' and gosm_time[nx][ny] == -1:
            if water_time[nx][ny] == -1 or gosm_time[x][y] + 1 < water_time[nx][ny]:
                gosm_time[nx][ny] = gosm_time[x][y] + 1
                gosm_q.append((nx, ny))

print("KAKTUS")
