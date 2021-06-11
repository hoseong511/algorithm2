import sys
from timeit import default_timer as timer
from datetime import timedelta

start = timer()
T = int(sys.stdin.readline())
for _ in range(T):
  # 나는 Bottom이 좋아
  memo = [0]*1000001
  memo[1] = 1
  memo[2] = 1
  memo[3] = 3
  n = int(sys.stdin.readline())
  if n <= 3:
    print(memo[n])
    continue
  for i in range(4, n+1):
    memo[i] = (memo[i-1] + memo[i-2] + memo[i-3])%1000000009

  print(memo[n])

end = timer()
print(timedelta(seconds=end-start))