from collections import deque

def funn(n):
    visited = [-1]*100001
    q = deque([n])
    visited[n] = 0

    while q:
        pos = q.popleft()

        if pos == k:
            return visited[pos]

        for next in [pos * 2, pos - 1, pos + 1]:
            if 0 <= next <= 100000 and visited[next] == -1:
                if next == pos * 2:
                    visited[next] = visited[pos]
                    q.appendleft(next)
                else:
                    visited[next] = visited[pos] + 1
                    q.append(next)

n,k = map(int,input().split())
print(funn(n))