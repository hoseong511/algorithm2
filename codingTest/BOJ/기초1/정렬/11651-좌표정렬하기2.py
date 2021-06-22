T = int(input())
data = []
for _ in range(T):
  data.append(list(map(int, input().split())))
data = sorted(data, key=lambda x: (x[1], x[0]))
for xy in data:
  print(*xy)