ls = list(map(int,input().split()))
x,y,r = map(int,input().split())
flag = False
for i in range(len(ls)):
    if ls[i]==x:
        print(i+1)
        exit()

print(0)