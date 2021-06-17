S = input()
alpha = 'abcdefghijklmnopqrstuvwxyz'
for char in alpha:
  print(S.index(char) if char in S else -1, end=" ")