import sys
T = int(sys.stdin.readline())
for _ in range(T):
  # 나는 Bottom이 좋아
  memo = [0]*11
  memo[1] = 1
  memo[2] = 2
  memo[3] = 4
  n = int(sys.stdin.readline())
  if n <= 3:
    print(memo[n])
    continue
  for i in range(4, n+1):
    memo[i] = memo[i-1] + memo[i-2] + memo[i-3]

  print(memo[n])