import sys
input = sys.stdin.readline

ls = list(input().strip())
stack=[]
alp=''
for i in ls:
    if i.isalpha():
        alp+=i
    else:
        if i == '(':
            stack.append(i)
        elif i == '*' or i == '/':
            while stack and (stack[-1] == '*' or stack[-1] =='/'):
                alp += stack.pop()
            stack.append(i)
        elif i == '+' or i == '-':
            while stack and stack[-1] != '(':
                alp += stack.pop()
            stack.append(i)
        elif i == ')':
            while stack and stack[-1] != '(':
                alp += stack.pop()
            stack.pop()
while stack :
    alp+=stack.pop()
    
print(alp)