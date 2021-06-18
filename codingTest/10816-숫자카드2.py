from collections import deque
import sys
from timeit import default_timer as timer
from datetime import timedelta

start = timer()
input = sys.stdin.readline
N = int(input())
# deq = input().split()
deq = [i for i in range(1, 500001)]
M = input()
ck = input().split()
ck = [ 250000 for _ in range(20000)]
table = {}
while deq:
  target = deq.pop()
  try:
    table[target]+=1
  except:
    table[target]=1
for i in ck:
  try:
    print(table[i], end=' ')
  except:
    print(0, end=' ')

end = timer()
print()
print(timedelta(seconds=end-start))