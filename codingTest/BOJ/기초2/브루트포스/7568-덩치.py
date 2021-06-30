N = int(input())
data = [list(map(int, input().split())) for i in range(N)]
for idx,target in enumerate(data):
  k = 1
  for j in range(N):
    flag = 0
    for xy in range(2):
      if target[xy] < data[j][xy]:
        flag += 1
    if flag == 2:
      k += 1
  print(k, end=' ')
