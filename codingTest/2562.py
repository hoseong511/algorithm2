import sys
from timeit import default_timer as timer
from datetime import timedelta

start = timer()
tmp,idx = 0, 0

for i in range(9):
  num = int(sys.stdin.readline())
  if tmp < num:
    tmp=num
    idx=i+1
  
print(tmp, idx, sep='\n')


end = timer()
print(timedelta(seconds=end-start))