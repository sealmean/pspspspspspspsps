import sys
input = sys.stdin.readline

n = int(input())
s = input().strip().split()

index_map = {}  # 단어를 인덱스로 매핑
arr = []  # 인덱스 배열
unique_words = []  # 고유 단어 리스트

for i in s:
    if i not in index_map: #첫등장
        index_map[i] = len(index_map)
        unique_words.append(i)
    arr.append(index_map[i])

visited = [False] * len(index_map)  # 단어의 등장 여부 추적
last_position = [-1] * len(index_map)  # 단어의 마지막 등장 위치 추적

max_length = 0
max_count = 1
start = 0

s = 0
end = 0 # 투 포인터

while end < n:
    if not visited[arr[end]]:  # 단어가 처음 등장했을 경우
        visited[arr[end]] = True
        last_position[arr[end]] = end
        end += 1
        continue
    
    s = last_position[arr[end]]  # 반복된 단어의 마지막 위치로 시작 포인터 이동
    temp = 0
    
    while end + temp < n and arr[s + temp] == arr[end + temp]:  # 반복된 부분 길이 측정
        temp += 1
    
    if temp // (end - s) + 1 > max_count:  # 더 긴 반복 부분이 발견되면 갱신
        start = s
        max_length = end - s
        max_count = temp // (end - s) + 1
    
    s += temp  # 시작 포인터 temp만큼 이동
    end = s  # 끝 포인터 시작 포인터 위치로 갱신
    
    visited = [False] * len(index_map)
    last_position = [-1] * len(index_map)

if max_count == 1: print(-1)
else:
    print(max_length, max_count)
    ans = []
    for i in range(max_length): ans.append(unique_words[arr[start + i]])
    print(*ans)
