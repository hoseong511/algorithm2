import sys
from timeit import default_timer as timer
from datetime import timedelta

start = timer()
N = int(sys.stdin.readline())
price = map(int, sys.stdin.readline().split())
price = [0] + list(price)
memo = [0]*1001
memo[1] = price[1]

for i in range(2,N+1):
  tmp = 10001
  for j in range(1, i+1):
    if j == 1 :
      memo[i] = min(memo[i-j] + price[j],tmp) 
      continue
    memo[i] = min(memo[i-j] + price[j], memo[i]) 
    
end = timer()
print(memo[N], timedelta(seconds=end-start))
