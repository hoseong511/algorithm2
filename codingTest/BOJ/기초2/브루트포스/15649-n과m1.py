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
N, M = map(int, input().split())
N = [i for i in range(1, N+1)]
for r in permutation(N, M):
  print(*r)

