N=int(input())
for _ in range(N):
  arr, ans = [], []
  data = input()
  for char in data:
    if char == 'O':
      arr.append(char)
      ans.append(len(arr))
    else:
      arr = []
  print(sum(ans))