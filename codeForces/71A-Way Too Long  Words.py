import sys
n = int(sys.stdin.readline().rstrip())
for _ in range(n):
  data = sys.stdin.readline().rstrip()
  print(data if len(data)<=10 else "%c%d%c"%(data[0],len(data)-2,data[-1]))

