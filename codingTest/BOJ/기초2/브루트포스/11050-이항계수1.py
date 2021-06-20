N, K = map(int, input().split())
memo = [1] * 11
memo[1] = 1
memo[2] = 2
for i in range(3, 11):
  memo[i] = memo[i-1] * i 

if K <0 or K-N>0:
  print(0)
  exit(0)

print(int(memo[N]/memo[K]/memo[N-K]))
