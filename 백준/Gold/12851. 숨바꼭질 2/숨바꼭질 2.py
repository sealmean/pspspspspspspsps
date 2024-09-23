from collections import deque

def funn(n, k):
    visited = [-1] * 100001 
    count = [0] * 100001 
    q = deque([n])
    
    visited[n] = 0
    count[n] = 1 

    while q:
        pos = q.popleft()

        for next in [pos * 2, pos - 1, pos + 1]:
            if 0 <= next <= 100000:
                if visited[next] == -1:
                    visited[next] = visited[pos] + 1
                    count[next] = count[pos] 
                    q.append(next)
                elif visited[next] == visited[pos] + 1:
                    count[next] += count[pos]

    return visited[k], count[k]

n, k = map(int, input().split())

min_time, ways = funn(n, k)
print(min_time)
print(ways)