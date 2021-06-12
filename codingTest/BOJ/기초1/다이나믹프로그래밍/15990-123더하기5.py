import sys
from timeit import default_timer as timer
from datetime import timedelta

start = timer()
T = int(sys.stdin.readline())
memo = [[i for i in range(10)] for i in range(101)]
memo[1].pop(0) # 0제거

print(len(memo[T])%1000000000)
  

end = timer()
print(timedelta(seconds=end-start))