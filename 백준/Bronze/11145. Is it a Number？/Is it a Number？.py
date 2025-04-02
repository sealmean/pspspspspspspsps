T = int(input())
for _ in range(T):
    s = input().strip()
    s = s.strip()
    
    if not s.isdigit():
        print("invalid input")
    else:
        print(int(s))