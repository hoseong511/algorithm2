import sys
input = sys.stdin.readline
N, M = map(int, input().split())
data = {}
for i in range(1,N+1):
  name = input().rstrip()
  data[str(i)] = name
  data[name] = str(i)
for _ in range(M):
  q = input().rstrip()
  print(data[q])
  
