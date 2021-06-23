import sys, heapq
input = sys.stdin.readline
T = int(input())
heap,data, count = [], [], 0
for _ in range(T):
  n = int(input())
  data.append(n)
  if n == 0:
    count+=1
for n in data:
  if n == 0:
    if heap: 
      print(heapq.heappop(heap))
    else:
      print(0)
    count -= 1
  else: 
    heapq.heappush(heap, n)
  if count == 0:
    break  
