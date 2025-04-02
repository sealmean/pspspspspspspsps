t = int(input())
for _ in range(t):
    count = 0
    e,n = map(int,input().split())
    for i in range(n):
        a = int(input())
        if e<a:
            count += 1
    print(count)