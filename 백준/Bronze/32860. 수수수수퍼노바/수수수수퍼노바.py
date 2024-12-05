n, m = map(int, input().split())

if m <= 26:
    order = chr(ord('A') + m - 1)
else:
    m -= 26
    first = chr(ord('a') + (m - 1) // 26)
    second = chr(ord('a') + (m - 1) % 26)
    order = first + second

print(f"SN {n}{order}")
