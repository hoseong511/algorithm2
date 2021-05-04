table = {}
for i in range(int(input())):
  arr = input().split()
  table[arr[0]] = list(map(int,arr[1:]))
arr = list(table.items())
first = ''
for i in range(3):
  result = sorted(arr, key = lambda x: x[1][i], reverse=True)
  if i == 0:
    first = result[0][0]
    print(first, end=' ')
    continue
  result = [ [stu[0],stu[1][i]] for idx, stu in enumerate(result) ]
  tmp = result[0][1] # tmp는 가장높은점수
  rank = 1
  for idx,j in enumerate(result):
    if tmp != j[1]:
      tmp = j[1]
      j[1] = idx+1
      rank = idx+1
    else:
      j[1] = rank
  
    if j[0] == first : # 1과목 1등인 학생의 다른 과목 석차
      print(j[1], end=' ')

