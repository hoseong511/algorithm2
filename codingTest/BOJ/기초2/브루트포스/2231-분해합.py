N = int(input())
tmp =[0]*1000001
for i in range(1, N+1):
  mod = 0
  target = i
  while target != 0:
    mod += target % 10
    target = target // 10
  if mod + i == N:
    print(i)
    exit(0)
print(0)