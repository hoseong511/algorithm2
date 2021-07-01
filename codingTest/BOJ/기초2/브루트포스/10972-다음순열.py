import sys
sys.setrecursionlimit(10000)

# def dfs(N, r, depth):
#   global ck
#   if depth == r :
#     lake.append(result[::])
#     if result == data:
#       ck = True
#       return
#     if ck: 
#       print(*result)
#       exit(0)
#   for i in range(1, N+1):
#     if not visited[i]:
#       visited[i] = True
#       result.append(i)
#       dfs(N, r, depth+1)
#       result.pop()
#       visited[i] = False
#   return



def permutation(arr, r):
  result = []
  def permute(p=[], index=[]):
    if len(p) == r:
      result.append(p)
      return
    for idx, data in enumerate(arr):
      if idx not in index:
        permute(p + [data], index + [idx])
  permute()
  return result


result, lake = [], []
N, data = int(input()), list(map(int,input().split()))
r = len(data)
ck = False
N = [i for i in range(1, N+1)]
for i in permutation(N, r):
  if ck:
    print(*i)
  if data == i :
    ck = True
print(-1)