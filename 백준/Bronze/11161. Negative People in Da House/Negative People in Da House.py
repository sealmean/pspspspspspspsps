T=int(input())
for _ in range(T):
    M=int(input())
    a=0
    m=0
    for _ in range(M):
        e,l=map(int,input().split())
        a+=e-l
        if a<0:
            m-=a
            a=0
    print(m)