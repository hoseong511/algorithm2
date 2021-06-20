N, M = map(int,input().split())
Map = [list(input()) for _ in range(N)]
# [print(*i, sep="") for i in Map]
dx, dy = [0, -1, 0, 1], [1, 0, -1, 0]
ck = [[False for _ in range(M)] for _ in range(N)]

for x in range(N):
  for y in range(M):
    if ck[x][y]:
      continue
    for w in range(4):
      xx, yy = x+dx[w], y+dy[w]  
      if xx<0 or yy<0 or xx==N or yy==M:
        continue
      if Map[x][y] != Map[xx][yy]:
        continue
      Map[xx][yy]