import sys
S = sys.stdin.readline().rstrip()
M = int(sys.stdin.readline())
l_stack, r_stack = list(S), []
for _ in range(M):
  cmd = sys.stdin.readline().split()
  if cmd[0] == 'L' and l_stack: 
    r_stack.append(l_stack.pop())

  elif cmd[0] == 'D' and r_stack:
    l_stack.append(r_stack.pop())

  elif cmd[0] == 'B' and l_stack:
    l_stack.pop()

  elif cmd[0] == 'P': 
    l_stack.append(cmd[1])
l_stack.extend(reversed(r_stack))
print(''.join(l_stack))
