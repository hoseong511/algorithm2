def permutation(array, r):
  for i in range(len(array)):
    if r == 1:
      yield [array[i]]
    else:
      for next in permutation(array[:i]+array[i+1:], r-1):
        print(next)
        yield [array[i]] + next

N, M = map(int, input().split())
A = sorted(list(map(int, input().split())))
for r in permutation(A, M):
  print(*r)

