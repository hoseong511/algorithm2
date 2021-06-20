while True:
  T = list(map(int , input().split()))
  if sum(T) == 0:
    break
  T = list(map(lambda x: x*x, T))
  T= sorted(T)
  print('right' if T.pop() == sum(T) else 'wrong')
