import sys 

N, C = map(int, sys.stdin.readline().split())
house = [ int(sys.stdin.readline()) for _ in range(N)]
house = sorted(house)
print(house)
max_len = house[-1] - house[0]
min_len = 1000000000
for i in range(1, N):
  if min_len > house[i]-house[i-1]:
    min_len=house[i]-house[i-1]
result = 0
while min_len <= max_len:
  mid_len = (max_len+min_len) // 2
  wifi_position = house[0]
  count = 1
  for i in range( 1, len(house)):
    if house[i] >= wifi_position + mid_len:
      wifi_position = house[i]
      count += 1
  if C <= count:
    min_len = mid_len + 1
    result = mid_len
  else: 
    max_len = mid_len - 1
print(result)