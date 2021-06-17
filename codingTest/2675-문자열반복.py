for _ in range(int(input())):
  data = input().split()
  N = int(data[0])
  string = data[1]
  for char in string:
    print(char*N, end='')
  print()