R, C = map(int, input().split())
M = [list(input()) for _ in range(R)]
dx, dy = [0, -1, 0, 1], [-1, 0, 1, 0]

check = False

for i in range(R):
  for j in range(C):
    if M[i][j] == 'S':
      for k in range(4):
        ii, jj = i + dx[k], j + dy[k]
        if ii < 0 or ii == R or jj < 0 or jj ==C:
          continue
        if M[ii][jj] == "W":
          check = True
if check:
  print(0)
else:
  print(1)
  for i in range(R):
    for j in range(C):
      if M[i][j] not in 'SW':
        M[i][j] = 'D'
  for i in M:
    print(*i, sep='')