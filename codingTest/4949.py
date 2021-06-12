while True:
  stack = []
  check = True
  data = input()
  if data == '.':
    break
  for idx,char in enumerate(data):
    if char =='.' and idx < len(data)-1:
      check = False
    if char == '(':
      stack.append(char)
    elif char == ')' :
      if stack and stack[-1] == '(':
        stack.pop()
      else:
        check = False
        break
    elif char == '[':
      stack.append(char)
    elif char == ']':
      if stack and stack[-1] == '[':
        stack.pop()
      else:
        check = False
        break
  print( 'yes' if check and not stack else 'no')