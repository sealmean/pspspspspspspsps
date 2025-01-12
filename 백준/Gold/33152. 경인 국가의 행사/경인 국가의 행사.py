import sys
input = sys.stdin.readline

t = int(input())
for _ in range(t):
    n = int(input())
    A = list(map(int, input().split()))
    
    if n <= 2:
        print("NO")
        continue
    
    arr = sorted([(A[i], i) for i in range(n)], key=lambda x: x[0])
    X = [0]*n
    Y = [0]*n
    
    need = n//2 + 1
    for i in range(need):
        p, idx = arr[i]
        Y[idx] = p//2 + 1
        X[idx] = p - Y[idx]
    for i in range(need, n):
        p, idx = arr[i]
        X[idx] = p
    
    sx = sum(X)
    sy = sum(Y)
    if sx > sy:
        print("YES")
        print(" ".join(map(str, X)))
        print(" ".join(map(str, Y)))
        continue
    
    if n % 2 == 0:
        tied = False
        for i in range(need):
            p, idx = arr[i]
            if p % 2 == 0 and p >= 2:
                Y[idx] -= 1
                X[idx] += 1
                sx = sum(X)
                sy = sum(Y)
                if sx > sy:
                    print("YES")
                    print(" ".join(map(str, X)))
                    print(" ".join(map(str, Y)))
                    tied = True
                else:
                    X[idx] -= 1
                    Y[idx] += 1
                if tied:
                    break
    if sx <= sy:
        if not (n % 2 == 0 and tied):
            print("NO")
