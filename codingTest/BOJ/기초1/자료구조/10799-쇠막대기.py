'''
일단 나올 수 있는 레이저의 개수
'''
import sys
stack = []
count=0
for char in sys.stdin.readline().replace("()","L"):
  if char == '(':
    stack.append(char)
    count += 1
  elif char == ')':
    stack.pop()
  else:
    count += len(stack)
print(count)