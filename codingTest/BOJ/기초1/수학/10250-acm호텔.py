'''
0 1 2 3
1
2
3
'''
T = int(input())
for _ in range(T):
  H, W, N = map(int, input().split())
  # x,y =0,0 라인은 제외 
  Map= [[0 for _ in range(W+1)] for _ in range(H+1)]   
  count = 1
  for y in range(1, W+1):
    for x in range(1, H +1):
      Map[x][y] = f"{x}{y if y > 9 else '0'+str(y)}"
      if count == N:
        print(Map[x][y])
      count += 1