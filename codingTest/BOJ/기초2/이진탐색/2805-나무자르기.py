import sys
input = sys.stdin.readline
N, M = map(int, input().split())
data = list(map(int, input().split()))
max_target = max(data)
min_target = 1
while max_target>=min_target:
  cut_tree =0
  tmp = (max_target + min_target) // 2
  for i in data:
    if i >= tmp :
      cut_tree += i - tmp
    if cut_tree >= M:
        break
  if cut_tree < M :
    max_target = tmp-1
  elif cut_tree >= M:
    min_target = tmp+1
print(max_target)

## 이분탐색의 기초