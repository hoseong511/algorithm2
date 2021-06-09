'''
push x
pop
size
empty
front
back
'''
import sys
queue=[]
N = int(sys.stdin.readline())
for _ in range(N):
  cmd = sys.stdin.readline().split()
  if cmd[0] == 'push':
    queue = [cmd[1]] + queue
  elif cmd[0] == 'pop':
    print(queue.pop() if queue else -1)
  elif cmd[0] == 'size':
    print(len(queue))
  elif cmd[0] == 'empty':
    print(0 if queue else 1)
  elif cmd[0] == 'front':
    print(queue[-1] if queue else -1)
  elif cmd[0] == 'back':
    print(queue[0] if queue else -1)

