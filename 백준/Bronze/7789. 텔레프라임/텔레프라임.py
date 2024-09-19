import sys
input = sys.stdin.readline

def is_prime_number(n):
    end = int(n**(1/2))
    for i in range(2, end+1):
        if n % i == 0:
            return False
    
    return True
a,b = map(int,input().split())
if is_prime_number(a) and is_prime_number(int(str(b)+str(a))):print("Yes")
else:print("No")