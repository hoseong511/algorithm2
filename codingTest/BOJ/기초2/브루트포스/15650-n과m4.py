def combination(array, r):
  for i in range(len(array)):
    if r == 1:
      yield [array[i]]
    else:
      for next in combination(array[i:], r-1):
        yield [array[i]] + next

N, M = map(int, input().split())
N = [i for i in range(1, N+1)]
for r in combination(N, M):
  print(*r)

