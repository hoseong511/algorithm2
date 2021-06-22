import sys
input = sys.stdin.readline
N, M, B = map(int, input().split())
Map = []
for _ in range(N):
  Map += list(map(int,input().split()))
time, height =  500*500*256*2, 0
for h in range(257): # 최소, 최대 사이 전부 구하기
  add, diff = 0,0
  for target in Map:
    if target < h:
      add += h-target
    else:
      diff += target-h
  if B + diff < add:
    continue
  t = add + diff*2
  if time >= t:
    time = t
    height = h
print(time , height)

