import sys
from timeit import default_timer as timer
from datetime import timedelta

start = timer()
N = int(sys.stdin.readline())
M, X = sys.stdin.readline(), sys.stdin.readline().split()
if N == 100:
  print('0')
  exit(0)  
result =[]
for i in range(N//10, 1000000):
  ck = True
  for a in str(i):
    if a in X:
      ck =False
      break
  if ck :
    result.append(i)
data = list(map(lambda x: abs(x-N) ,result))
answer = result[data.index(min(data))]
print(len(str(answer))+abs(N-answer))

end = timer()
print(timedelta(seconds = end-start))