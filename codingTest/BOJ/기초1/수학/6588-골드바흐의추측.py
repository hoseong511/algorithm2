import sys
from timeit import default_timer as timer
from datetime import timedelta

start = timer()
while True:
  T = int(sys.stdin.readline())
  data = [i for i in range(T+1, 2, -2)]
  for i in data:
    check = True
    tmp = int(i**(1/2))
    for s in range(2,tmp+1):
      if i % s == 0:
        check = False
        break
    if check:
      if T - i >= 3:
        print(f"{T} = {T-i} + {i}")
        break
  if T == 0:
    break

end = timer()
print(timedelta(seconds=end-start))
