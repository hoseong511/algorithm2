'''
완전 탐색을 어떤식으로 하면 좋을지 고민..
data =[]
'''
def combination(arr, r):
  result = []
  def combinate(c=[], index=-1):
    if len(c) == r:
      result.append(c)
      return 
    for idx, data in enumerate(arr):
      if idx > index:
        combinate(c + [data], idx)
  combinate()
  
  return result
data = [ int(input()) for _ in range(9)]

for r in combination(data, 7):
  if sum(r) == 100:
    data = r
    break
[ print(i) for i in sorted(data) ]

