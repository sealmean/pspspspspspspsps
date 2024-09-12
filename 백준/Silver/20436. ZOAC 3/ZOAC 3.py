l,r = input().split()
arr = input().strip()

table = [["q","w","e","r","t","y","u","i","o","p"],
         ["a","s","d","f","g","h","j","k","l"],
         ["z","x","c","v","b","n","m"]]

pos = {}

for row in range(len(table)):
    for col in range(len(table[row])):
        pos[table[row][col]] = (row, col)

ans = 0

for i in arr:
    if i in "qwertasdfgzxcv":
        ans += abs(pos[l][0] - pos[i][0]) + abs(pos[l][1] - pos[i][1]) + 1
        l = i
    else:
        ans += abs(pos[r][0] - pos[i][0]) + abs(pos[r][1] - pos[i][1]) + 1
        r = i

print(ans)