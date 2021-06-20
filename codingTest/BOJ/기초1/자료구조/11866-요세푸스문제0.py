N, K = map(int, input().split())
data = [i for i in range(1,N+1)]
arr = []
for i in range(N):
  if len(queue) < K:
    tmp = K % len(queue)
    queue = queue[tmp:] + queue[:tmp]
    arr.append(queue.pop())
    continue
  data = data[K:]+data[:K]
  arr.append(data.pop())
print("<", end='')
print(*arr, sep=", ", end='')
print(">", end='')