N,M = map(int,input().split())
table = []
for _ in range(N):
  a,b = input().split()
  table.append((a,int(b)))
arr = sorted(table ,key= lambda x: x[1], reverse=True)
for i in range(M):
  print(arr[i][0])