import sys
N = int(sys.stdin.readline())
memo = [0]*1001
data = list(map(int,sys.stdin.readline().split()))
memo[1] = min(data)
idx = data.index(memo[1])
for i in range(2, N+1):
  data = list(map( int, sys.stdin.readline().split()))
  tmp = data[:] # 복사
  tmp.pop(idx)
  memo[i] = memo[i-1] + min(tmp)
  idx = data.index(min(tmp))
  print(data ,idx)
print(memo[N])