N = int(input())
DP = [1] * 501
for i in range(1, N+1):
  DP[i] = DP[i-1] * i
target = str(DP[N])
cnt = 0
for i in target[::-1]:
  if i == '0':
    cnt += 1
  else:
    print(cnt)
    break