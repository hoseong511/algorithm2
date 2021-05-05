import sys
sys.setrecursionlimit(1000000)
# print(sys.getrecursionlimit())

def add(a): 
  if a <= 1:
    return 1
  return a + add(a-1) 
a = int(input())
print(add(a))