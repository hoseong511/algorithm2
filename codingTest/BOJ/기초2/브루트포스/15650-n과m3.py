def permutations_4(array, r):
  for i in range(len(array)):
    if r == 1:
      yield [array[i]]
    else:
      for next in permutations_4(array, r-1):
        yield [array[i]] + next

N, M = map(int, input().split())
N = [i for i in range(1, N+1)]
for r in permutations_4(N, M):
  print(*r)

