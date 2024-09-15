import sys 
input = sys.stdin.readline

R,C = map(int, input().split())

arr=[list(input()) for _ in range(R)]

check=[0]*(26)

dx=[1, -1, 0, 0]
dy=[0, 0, 1, -1]

ans = 0

def dfs(x,y,cnt):
    global ans
    ans = max(cnt,ans)
    for i in range(4):
        nx = x + dx[i]
        ny = y + dy[i]
        if 0 <= nx < R and 0 <= ny < C and check[ord(arr[nx][ny]) - 65] == 0:
            check[ord(arr[nx][ny]) - 65] = 1
            dfs(nx, ny, cnt + 1)
            check[ord(arr[nx][ny]) - 65] = 0

check[ord(arr[0][0]) - 65] = 1
dfs(0, 0, 1)

print(ans)
