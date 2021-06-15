def dfs(graph, start):
  visited, need =[], []
  need.append(start)
  while need:
    node = need.pop()
    if node not in visited:
      visited.append(node)
      need.extend(sorted(graph[node], reverse=True))
  return visited
def bfs(graph, start):
  visited, need=[], []
  need.append(start)
  while need:
    node = need.pop(0)
    if node not in visited:
      visited.append(node)
      need.extend(sorted(graph[node]))
  return visited

N,M,V = map(int, input().split())
graph = [[] for _ in range(N+1)]
for _ in range(M):
  x, y = map(int, input().split())
  graph[x].append(y)
  graph[y].append(x)

print(*dfs(graph,V))
print(*bfs(graph,V))