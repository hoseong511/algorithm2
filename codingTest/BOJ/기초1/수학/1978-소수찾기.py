'''
소수의 조건
소인수 분해 시 1과 자기 자신
'''
n = int(input())
m = map(int, input().split())
count = 0
for i in m:
  check = False
  if i == 1:
    continue
  for s in range(2,i+1):
    if s != i and i % s == 0:
      check = True
      break
  if not check:
    count += 1
print(count)