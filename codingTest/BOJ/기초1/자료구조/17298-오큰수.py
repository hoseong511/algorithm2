input()
data = list(map(int ,input().split()))
# data = [ i for i in range()]
result = ''
for idx,n in enumerate(data):
  try:
    m = min(filter(lambda x: x>n, data[idx+1:]))
  except:
    m = -1
  print(m, end=' ')
