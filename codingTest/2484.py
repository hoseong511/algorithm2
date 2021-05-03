N = int(input())
f = 0
total = 0
for _ in range(N):
  arr = sorted(list(map(int, input().split())))
  print(arr)
  if len(set(arr)) == 4:
    total = arr[3] * 100
  elif len(set(arr)) == 3:
    for i in range(3):
      if arr[i] == arr[i+1]:
        total = 1000 + arr[i] * 100
  elif len(set(arr)) == 2:
    if arr[1] == arr[2]:
      total = 10000 + arr[1] * 1000
    else:
      total = 2000 + arr[1] * 500 + arr[2] * 500
  else:
    total = 50000 + arr[0] * 5000
  print(total)
  if f < total:
    f = total
print(f)