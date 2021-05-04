class Table:
  def setScore(self,name, s1,s2,s3):
    self.name = name
    self.s1 = int(s1)
    self.s2 = int(s2)
    self.s3 = int(s3)

table = [0] * int(input())
for i in range(len(table)):
  name, s1,s2,s3 = input().split()
  table[i] = Table()
  table[i].setScore(name, s1,s2,s3)
first = sorted(table, key= lambda x: x.s1, reverse=True)
second = sorted(table, key= lambda x: x.s2, reverse=True)
third = sorted(table, key= lambda x: x.s3, reverse=True)
print(first[0].name, end=' ')
rank = 1
for i in range(len(second)):
  if i > 0:
      if second[i-1].s2 != second[i].s2:
        rank = i+1
  if second[i] == first[0]:  # 객체 주소가 같은지 확인한다. -> 동명이인이 있음
    print(rank, end = ' ')
    rank = 1
    break
for i in range(len(third)):
  if i > 0:
      if third[i-1].s3 != third[i].s3:
        rank = i+1
  if third[i]== first[0]:  
    print(rank, end = ' ')
    break
      