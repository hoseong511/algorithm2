N, M = map(int, input().split())
table = {}
for _ in range(N+M):
  name = input()
  try:
    table[name] += 1
  except:
    table[name] = 1
result = sorted(list(filter(lambda x: x[1] ==2, table.items())))
print(len(result))
[print(i[0]) for i in result]
