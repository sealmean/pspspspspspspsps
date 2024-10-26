t = int(input())
for i in range(t):
    a = list(input().split())
    for i in a:
        print(i[::-1],end=" ")
    print()