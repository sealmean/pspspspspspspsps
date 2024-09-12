N = int(input())
ls = list(map(str,input().split()))
ans = ""

def bubble_sort(arr):
    for i in range(N-1):
        for j in range(N-i-1):
            if int(str(arr[j])+str(arr[j+1])) < int(str(arr[j + 1])+str(arr[j])):
                arr[j], arr[j + 1] = arr[j + 1], arr[j]
    return arr
ads = bubble_sort(ls)
if ads[0] == '0':
    print(0)
else:
    for i in range(N):
        ans += ads[i]
    print(ans)