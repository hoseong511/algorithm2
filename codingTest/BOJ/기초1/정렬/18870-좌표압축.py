N = int(input())
table={}
data = list(map(int, input().split()))
sorted_data = sorted(set(data))
for idx,i in enumerate(sorted_data):
  table[i] = idx
for i in data:
  print(table[i], end=' ')