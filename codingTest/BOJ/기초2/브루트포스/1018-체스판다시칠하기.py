def ck_wb(a, b):
  ret_w, ret_b = 0, 0
  for i in range(64):
    x = i // 8 + a
    y = i % 8 + b
    if (x+y) % 2 == 0:
      if Map[x][y] != 'W': ret_w+=1
      if Map[x][y] != 'B': ret_b+=1 
    else:
      if Map[x][y] != 'B': ret_w+=1
      if Map[x][y] != 'W': ret_b+=1
  return [ret_w, ret_b]
  
N, M = map(int, input().split())
Map = [list(input()) for _ in range(N)]
min_num = 2500
for a in range(N-7):
  for b in range(M-7):
    data = ck_wb(a,b)
    min_num= min([min_num] +data)
print(min_num)
