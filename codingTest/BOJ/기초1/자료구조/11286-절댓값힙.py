import sys, heapq
N = int(input())
data, count, heap = [], 0, []
for _ in range(N):
  n = int(input())
  data.append(n)
  if n == 0:
    count+=1
for i in data:
  if i == 0:
    if heap:
      print(heapq.heappop(heap)[1])
    else:
      print(0)
  else:
    heapq.heappush(heap, (abs(i), i))