def dfs(x, y):
  ck[x][y] = True
  result = 1
  for w in range(4):
    xx,yy = x+ dx[w], y+dy[w]
    if xx < 0 or yy < 0 or xx >= N or yy >= 10:
      continue
    if ck[xx][yy] or M[x][y] != M[xx][yy]:
      continue
    result += dfs(xx, yy)
  return result 

def dfs2(x, y, val):
  ck2[x][y] = True
  M[x][y] = '0'
  for w in range(4):
    xx,yy = x+ dx[w], y+dy[w]
    if xx < 0 or yy < 0 or xx >= N or yy >= 10:
      continue
    if ck2[xx][yy] or val != M[xx][yy]:
      continue
    dfs2(xx, yy, val)
  return 

def down(): 
  for y in range(10):
    tmp = []
    for x in range(N):
      if M[x][y] != '0':
        tmp.append(M[x][y])
    for x in range(N-len(tmp)):
      M[x][y] = '0'
    for x in range(N-len(tmp), N):
      M[x][y] = tmp[x - (N-len(tmp))]

dx, dy = [0, -1, 0, 1], [1, 0, -1, 0]
N, K = map(int, input().split())
M = [ list(input()) for _ in range(N)]

while True:
  exist = False
  ck = [[False for i in range(10)] for _ in range(N)]
  ck2 = [[False for i in range(10)] for _ in range(N)]
  for x in range(N):
    for y in range(10):
      if M[x][y] == '0' or ck[x][y]:
        continue
      result = dfs(x, y)
      if result >= K:
        dfs2(x,y, M[x][y])
        exist = True
  if not exist:
    break
  down()

for i in M:
  print(*i, sep='')