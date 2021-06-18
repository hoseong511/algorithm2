N, M = map(int, input().split())
Map = [list(input()) for _ in range(N)]

dx, dy = [0, -1, 0, 1], [1, 0, -1, 0]
arr=[[0]*(M-8+1) for _ in range(N-8+1)]
for a in range(N-8+1):
  for b in range(M-8+1):
    ck = [ [False for _ in range(M)] for _ in range(N)]
    Map1 = [ m[:] for m in Map]
    ret = 0
    for i in range(a, a+8):
      for j in range(b, b+8):
        for w in range(4):
          xx, yy = i + dx[w], j + dy[w]
          if xx < a or yy < b or xx == a+8 or yy == b+8:
            continue
          if ck[xx][yy] or Map1[i][j] != Map1[xx][yy]:
            continue
          if Map1[i][j] == 'B':
            Map1[xx][yy] = 'W'
            ret += 1
          elif Map1[i][j] == 'W':
            Map1[xx][yy] = 'B'
            ret += 1
        ck[i][j] = True
    arr[a][b]=ret      
min_num = 2500
for a in arr:
  min_num = min([min_num] +a)
print(min_num)

