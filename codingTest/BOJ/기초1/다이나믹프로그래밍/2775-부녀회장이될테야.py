T = int(input())
for _ in range(T):
  k, n = int(input()), int(input())
  total = 0
  DP = [[1]*14 for _ in range(15)]
  DP[0] = [ i for i in range(n+1)]
  for i in range(1, k+1):
    DP[i] = [ sum(DP[i-1][:j+1]) for j in range(n+1)]
  print(DP[k][n])