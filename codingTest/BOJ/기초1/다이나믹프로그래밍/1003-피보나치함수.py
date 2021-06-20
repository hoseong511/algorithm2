'''DP'''
T = int(input())
for _ in range(T):
  N = int(input())
  DP= [0] * 41
  DP[0] = [1, 0]
  DP[1] = [0, 1]
  DP[2] = [1, 1]
  if N >= 3:
    for i in range(3, N+1):
      DP[i] = [DP[i-1][j] + DP[i-2][j] for j in range(2)] 

  print(*DP[N])