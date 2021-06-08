import sys
n = int(sys.stdin.readline())
stack, result =[0], []
count = 0
for _ in range(n):
  a = int(sys.stdin.readline())
  while count < a:
    count += 1
    stack.append(count)
    result.append('+')
  if stack[-1] == a:
    stack.pop()
    result.append('-')
  else:
    print('NO')
    exit(0)
[print(i) for i in result]