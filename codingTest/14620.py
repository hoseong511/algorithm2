N = int(input())
M = [ list(map(int, input().split())) for i in range(N)]
result = 10000
dx, dy = [0,0, -1, 0, 1], [0,1, 0, -1, 0]
def check(lst):
  total = 0
  flowers = []
  for flower in lst:
    x = flower // N
    y = flower % N
    if x == 0 or x == N-1 or y == 0 or y == N-1:
      return 10000
    for w in range(5):
      xx, yy = x+dx[w], y+dy[w]
      flowers.append((xx, yy))
      total += M[xx][yy]
  if len(set(flowers)) != 15:
    return 10000
  return total
for i in range(N*N):
  for j in range(i+1, N*N):
    for k in range(j+1, N*N):
      result = min(result, check([i, j, k]))
print(result)