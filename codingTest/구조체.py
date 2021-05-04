table = {}
for i in range(int(input())):
  arr = input().split()
  table[arr[0]] = list(map(int,arr[1:]))
arr = list(table.items())
first = ''
answer = ''
for i in range(3):
  result = sorted(arr, key = lambda x: x[1][i], reverse=True)
  if i == 0:
    first = result[0][0]
    answer = first
    continue
  for idx, j in enumerate(result):
    if j[0] == answer:
      first += f' {idx+1}'

print(first)
