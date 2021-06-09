import sys
N = int(sys.stdin.readline())
price = map(int, sys.stdin.readline().split())
price = [0] + list(price)
memo = [0]*1001
memo[1] = price[1]
if N > 1:
  memo[2] = max(price[1]+price[1], price[2])
if N > 2:
  memo[3] = max(price[1]+price[2], price[3], price[1]*3)
if N <= 3:
  print(memo[N])
  exit(0)
for i in range(4,N+1):
  memo[i] = max(memo[i-1]+price[i-3],
                memo[i-2]+price[i-2],
                memo[i-3]+price[i-1])
  print(memo)
    
print(memo[N])