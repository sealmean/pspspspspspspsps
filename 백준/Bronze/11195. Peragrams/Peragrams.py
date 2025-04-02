from collections import Counter

s = input().strip()
count = Counter(s)
odd = 0

for i in count:
    if count[i] % 2 != 0:
        odd += 1

print(max(0, odd - 1))