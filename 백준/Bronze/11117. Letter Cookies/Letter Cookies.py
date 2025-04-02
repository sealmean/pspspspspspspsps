from collections import Counter

t = int(input())
for _ in range(t):
    cnt = Counter(input().strip())
    w = int(input())
    for _ in range(w):
        word = input().strip()
        word_cnt = Counter(word)
        print("YES" if all(word_cnt[c] <= cnt[c] for c in word_cnt) else "NO")