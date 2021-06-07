for _ in range(int(input())):
  S = input()
  stack, ans = '', ''
  for char in S:
    if char == ' ':
      ans += stack[::-1] + ' '
      stack = ''
    else:
      stack += char
  ans += stack[::-1]
  print(ans)