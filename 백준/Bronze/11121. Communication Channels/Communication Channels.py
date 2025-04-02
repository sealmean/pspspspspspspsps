t = int(input())
for i in range(t):
    a,b = map(str,input().split())
    if a==b:
        print("OK")
    else:
        print("ERROR")