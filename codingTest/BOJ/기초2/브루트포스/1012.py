import sys
sys.setrecursionlimit(10000)

'''
브루트포스전략! 단, 백트래킹기능이 추가되었다.
탐색을 했던 곳은 다시 탐색하지 않고 조건에 맞는 곳만 dfs 한다.
'''
dx, dy = [1, 0, -1, 0], [0, 1, 0, -1]

T = int(input())

def search(x,y):
  global ANS
  ANS += 1
  visited[x][y] = 1
  for w in range(4):
    xx, yy = x+dx[w], y+dy[w]
    if xx==N or yy==M or xx <0 or yy <0:
      continue
    if not visited[xx][yy] and A[xx][yy] == 1:
      search(xx, yy)
      continue
    visited[xx][yy] = 1
  return

for _ in range(T):
  N, M, K = map(int, input().split())  
  A = [[0 for _ in range(M)] for _ in range(N)]
  visited = [[0 for _ in range(M)] for _ in range(N)]
  ANS = 0
  b =[]
  for _ in range(K):
    x, y = map(int,input().split())
    A[x][y] = 1
  for x in range(N):
    for y in range(M):
      if not visited[x][y] and A[x][y] == 1:
        search(x,y)
        b.append(ANS) # 배추의 총 개수가 맞는지 확인하기위해서 사용했다
        ANS = 0

  print(len(b))