K, N = map(int, input().split())
data = [ int(input()) for _ in range(K)]
max_target = 2147483647
min_target = 1
while max_target!=min_target:
  count_lan =0
  tmp = (max_target + min_target+1) // 2
  for i in data:
    count_lan += i // tmp
  if count_lan < N :
    max_target = tmp-1
  elif count_lan >= N:
    min_target = tmp
print(max_target)