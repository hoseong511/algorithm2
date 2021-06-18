from collections import deque

N = int(input())
if N == 1:
  print(1)
  exit(0)
deq = deque([ i for i in range(1,N+1)])
while True:
  deq.popleft()
  deq.append(deq.popleft())
  if len(deq) == 1:
    print(*list(deq))
    break