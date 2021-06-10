import sys
N = int(sys.stdin.readline())
price = map(int, sys.stdin.readline().split())
price = [0] + list(price)
memo = [0]*1001
memo[1] = price[1]

for i in range(2,N+1):
  for j in range(1, i+1):
    memo[i] = max(memo[i], memo[i-j]+price[j])
    
print(memo[N])