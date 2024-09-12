import sys
input = sys.stdin.readline

t = int(input().strip())
results = []

for _ in range(t):
    n = int(input())
    s = input().strip()
    
    stack = []
    count = 0
    
    for i in range(n):
        if s[i] == 'T':
            if not stack:
                stack.append(i)
            else:
                temp = stack.pop()
                if (i - temp) % 2 == 0:
                    stack.append(temp)
                    stack.append(i)
                else:
                    count += i - temp
    
    if not stack: print(count)
    else: print(-1)
