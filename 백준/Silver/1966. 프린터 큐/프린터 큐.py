from collections import deque

T = int(input())

for i in range(T):
    n,m = map(int,input().split())
    words = list(map(int,input().split()))
    words = deque(words)
    count = 0
    while words:
        imp = max(words)
        front = words.popleft()
        m -= 1

        if imp == front:
            count += 1
            if m == -1:
                print(count)
                break
        else:
            words.append(front)
            if m == -1:
                m = len(words)-1