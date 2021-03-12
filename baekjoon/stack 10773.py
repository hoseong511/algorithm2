import sys
n = int(sys.stdin.readline().rstrip())
arr=list()
for _ in range(n):
  a = int(sys.stdin.readline().rstrip())
  if a != 0:
    arr.append(a)
  else:
    arr.pop()
print(sum(arr))
