import sys
input = sys.stdin.readline
M = int(input())
data = set()
data.add(3)
data = data | {4}
print(data)
for _ in range(M):
  cmd = input().split()
  if cmd[0] == 'add':
    data.add(int(cmd[1]))
  elif cmd[0] == 'remove':
    data.discard(int(cmd[1]))
  elif cmd[0] == 'check':
    print(1 if int(cmd[1]) in data else 0)
  elif cmd[0] == 'toggle':
    if cmd[1] in data: data.remove(cmd[1])
    else: data.add(cmd[1])
  elif cmd[0] == 'all':
    data = [str(i) for i in range(1,21)]
    data = set(data)
  elif cmd[0] == 'empty':
    data.clear()