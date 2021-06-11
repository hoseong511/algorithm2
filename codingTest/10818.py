import sys
from timeit import default_timer as timer
from datetime import timedelta

start = timer()
N = int(sys.stdin.readline())
data = list(map(int, sys.stdin.readline().split()))
print(min(data),max(data), )

end = timer()
print(timedelta(seconds=end-start))