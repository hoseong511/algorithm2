N = int(input())
DP = [-1]*5001
DP[3] = 1
DP[5] = 1
for i in range(6, N+1):
  tmp3, tmp5 = i-3, i-5
  if DP[tmp3] != -1:
    DP[i] = DP[tmp3] + DP[3]
  if DP[tmp5] != -1:
    if DP[i] != -1: 
      DP[i] = min(DP[i], DP[tmp5] + DP[5])
    else:
      DP[i] = DP[tmp5] + DP[5]
[ print(idx, tar) for idx, tar in enumerate(DP)]