import sys
input = sys.stdin.readline
print = sys.stdout.write

T = int(input())
for _ in range(T):
  M, N, x, y = map(int, input().split())
  i,j = 1,1
  cnt, ck = 1, False
  while True:
    i, j = i % M , j % N
    if i == 0: i = M
    if j == 0: j = N
    if i == x and j == y:
      print(str(cnt)+ '\n')
      break
    if i == M and j == N: 
      ck = True
      break
    cnt += 1
    i += 1
    j += 1
  if ck: print(str(-1)+ '\n')