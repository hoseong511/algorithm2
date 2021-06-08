import sys
T = int(sys.stdin.readline())
for _ in range(T):
  stack = []
  data = sys.stdin.readline().rstrip()
  for char in data:
    if char == '(':
      stack.append(char)
    elif char == ')' and stack:
      stack.pop()
    else:
      stack.append(char)
      break
  print('NO' if stack else 'YES')