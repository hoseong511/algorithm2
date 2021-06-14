import sys
N= int(sys.stdin.readline()) 
M = [ list(sys.stdin.readline().rstrip()) for i in range(N)]
dx,dy = [-1, 0], [0, -1]
def ck(x,y):
  tmp = 0
  count_x, count_y = 1, 1
  for j in range(1, N):
    if M[x][j] == M[x][j-1]: count_x+=1
    else: 
      if tmp < count_x: tmp = count_x
      count_x = 1
    if M[j][y] == M[j-1][y]: count_y+=1
    else: 
      if tmp < count_y: tmp = count_y
      count_y = 1 # 초기화를... 해줘야지.. ㅠㅠㅠㅠㅠㅠㅠㅠㅠㅠ
  return max(tmp, count_x, count_y)

result = []

for i in range(N*N):
  x = i // N
  y = i % N
  for w in range(2):
    xx, yy = x+dx[w], y+dy[w]
    if xx < 0 or xx == N or yy<0 or yy == N: continue
    M[x][y], M[xx][yy] = M[xx][yy], M[x][y]
    result.append(max(ck(x,y), ck(xx,yy)))
    M[x][y], M[xx][yy] = M[xx][yy], M[x][y]
print(max(result))
