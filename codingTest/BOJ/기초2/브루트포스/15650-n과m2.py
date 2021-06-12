import sys
def combination(arr, r):
  result, stack_count = [] , []
  def combinate(c=[], index=-1):
    count = 0
    if len(c) == r:
      result.append(c)
      return 
    for idx, data in enumerate(arr):
      count +=1
      if idx > index:
        combinate(c + [data], idx)
    stack_count.append(count)
  combinate()
  print(sum(stack_count))
  return result

N,M = map(int , sys.stdin.readline().split())
arr = [i for i in range(1, N+1)]
result = combination(arr, M)
[ print(*i, sep=' ') for i in result ]
