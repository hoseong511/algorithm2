import sys
from timeit import default_timer as timer
from datetime import timedelta

start = timer()
N = sys.stdin.readline()
M, X = sys.stdin.readline(), sys.stdin.readline().split()
r = len(N)
remocon = [i for i in range(10) if i not in list(map(int,X))]
visited = [False]*(500001)
def dfs(N,r,depth=0):
  if depth == r:
    print(*result)
    return
  for i in N:
    if not visited[i]:
      visited[i] =True
      result.append(i)
      dfs(N, r, depth+1)
      visited[i] = False
      result.pop()
dfs(remocon,r)
print(remocon)
if N == 100:
  print('0')
  exit(0)  
result =[]

# for i in range(1, 500000):
  # if i
    # print(i)
# data = list(map(lambda x: abs(x-N) ,result))
# answer = result[data.index(min(data))]
# print(len(str(answer))+abs(N-answer))

end = timer()
print(timedelta(seconds = end-start))