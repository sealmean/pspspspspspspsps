T = int(input())
for _ in range(T):
    words = input().split()
    ans = []
    for word in words:
        total = sum(ord(c) - ord('a') for c in word) % 27
        if total == 26:
            ans.append(' ')
        else:
            ans.append(chr(total + ord('a')))
    print(''.join(ans))