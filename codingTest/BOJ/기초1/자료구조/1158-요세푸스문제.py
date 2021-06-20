N, K = map(int, input().split())
queue, result = [i for i in range(1, N+1)], []
print(queue)
for i in range(N):
  if len(queue) < K:
    tmp = K % len(queue)
    queue = queue[tmp:] + queue[:tmp]
    result.append(queue.pop())
    continue
  queue = queue[K:] + queue[:K]
  result.append(queue.pop())
# print('<', end='')
# print(*result, sep = ', ', end='')
# print('>', end='') # *result 이거 너무 신기해 
result = map(str, result)
print("<", ", ".join(result), ">", sep='')