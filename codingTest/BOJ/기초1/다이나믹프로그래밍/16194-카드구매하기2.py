import sys
N = int(sys.stdin.readline())
price = map(int, sys.stdin.readline().split())
price = [0] + list(price)
memo = [0]*1001
memo[1] = price[1]

for i in range(2,N+1):
  arr =[]
  for j in range(1, i+1):
    arr.append(memo[i-j] + price[j]) 
  memo[i] = min(arr)    
print(memo[N])