n = int(input())
for _ in range(n):
    s = input().lower()
    alp = set('abcdefghijklmnopqrstuvwxyz')
    tmp = set()
    for c in s:
        if c in alp:
            tmp.add(c)
    if len(tmp) == 26:
        print("pangram")
    else:
        missing = sorted(alp - tmp)
        print("missing " + ''.join(missing))