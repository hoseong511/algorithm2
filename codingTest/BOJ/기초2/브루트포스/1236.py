N, M = map(int, input().split())
S = [list(input()) for _ in range(N)]
row, column = [0]*N, [0]*M
for x in range(N):
  for y in range(M):
    if S[x][y] == 'X': 
      row[x] = 1
      column[y] = 1
r_count, c_count = 0,0
for i in range(N):
  if row[i] == 0:
    r_count += 1
for i in range(M):
  if column[i] == 0:
    c_count += 1

print(max(r_count, c_count))