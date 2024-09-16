n, m, t = map(int, input().split())

table = []
for _ in range(n):
    a, b = map(int, input().split())
    table.append((a, b))

time_changes = [0] * (t + 1)

for _ in range(m):
    c, d = map(int, input().split())
    c -= 1
    d -= 1    
    start = max(table[c][0], table[d][0])  # 둘 중 더 늦게 입장한 시간
    end = min(table[c][1], table[d][1])    # 둘 중 더 일찍 퇴장한 시간
    
    if start < end:
        time_changes[start] += 1 
        time_changes[end] -= 1

ans = 0
for i in range(t):
    ans += time_changes[i]
    print(ans)
