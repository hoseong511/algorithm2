'''
2개의 큐에 숫자를 모두 넣되 우선순위를 다르게 설정
''' 
import sys, heapq
input = sys.stdin.readline

T = int(input())
for _ in range(T):
  maxque, minque = [], []
  visited = [False for _ in range(1000001)]
  N = int(input())
  for i in range(N):
    cmd = input().split()
    num = int(cmd[1])
    if cmd[0] == 'I': 
      heapq.heappush(minque, (num, i))
      heapq.heappush(maxque, (-num, i))
      visited[i] = True
    elif cmd[0] == 'D':
      if num == 1:
        while maxque and not visited[maxque[0][1]]:
          heapq.heappop(maxque)
        if maxque:
          visited[maxque[0][1]] = False
          heapq.heappop(maxque)
      elif num == -1:  
        while minque and not visited[minque[0][1]]:
          heapq.heappop(minque)
        if minque:
          visited[minque[0][1]] = False
          heapq.heappop(minque)

  while minque and not visited[minque[0][1]]: heapq.heappop(minque)
  while maxque and not visited[maxque[0][1]]: heapq.heappop(maxque)
  print(f'{-maxque[0][0]} {minque[0][0]}' if maxque and minque else'EMPTY')