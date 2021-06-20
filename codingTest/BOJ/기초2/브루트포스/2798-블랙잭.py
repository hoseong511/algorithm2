def dfs(data, r, depth=0):
  if depth == r:
    if sum(result) <= M:
      ans.append(sum(result))
    return
  for idx,i in enumerate(data):
    if not ck[idx]:
      ck[idx] = True
      result.append(i)
      dfs(data, r, depth+1)
      result.pop()
      ck[idx] = False
  return 
if __name__ == "__main__" :
  N, M = map(int, input().split())
  data = list(map(int, input().split()))

  result,ans = [], []
  ck = [False]*N
  dfs(data,3)
  print(max(ans))