import sys
input = sys.stdin.readline
print = sys.stdout.write
N = int(input())
DP = [50001]*50001
DP[1] = 1
for i in range(2, N+1):
  tmp = i ** 0.5
  if tmp*10%10  == 0:
    DP[i] = 1
    continue
  for j in range(1,int(tmp)+1):
    j = j ** 2
    DP[i] = min(DP[i], DP[j]+DP[i-j])
print(str(DP[N]))