

for i in input().split():
  
  for _ in range(len(i)-1,-1,-1):
    print(i[_], end='')
  print(' ', end='')