n, m = map(int, input().split())

data = [i for i in range(n, m+1)]
for i in data:
  check = True
  if i == 1:
    continue
  tmp = int(i**(1/2))
  for s in range(2,tmp+1):
    if i % s == 0:
      check = False
      break
  if check:
    print(i)