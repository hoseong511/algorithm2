N = int(input())
data = input().split()
M = int(input())
ck = input().split()
table = {}
while data:
  target = data.pop()
  try:
    table[target]+=1
  except:
    table[target]=1
for i in ck:
  try:
    print(table[i], end=' ')
  except:
    print(0, end=' ')