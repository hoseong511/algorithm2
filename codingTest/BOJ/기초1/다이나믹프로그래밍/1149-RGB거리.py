import sys
N = int(sys.stdin.readline())
memo = [[0,0,0] for _ in range(1001)]
data = [0]+[list(map(int,sys.stdin.readline().split())) for _ in range(N)] 
memo[1] = data[1]
for i in range(2, N+1): # 각각의 경우(R,G,B)를 선택했을 때의 값을 저장하기
  memo[i][0] = data[i][0] + min(memo[i-1][1], memo[i-1][2])
  memo[i][1] = data[i][1] + min(memo[i-1][0], memo[i-1][2])
  memo[i][2] = data[i][2] + min(memo[i-1][0], memo[i-1][1])
print(min(memo[N]))