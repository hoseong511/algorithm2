n, arr = int(input()), list(map(int,input().split()))
A = [arr[0]]
for i in range(1, n):
  A.append(arr[i]*(i+1)-sum(A))  
print(' '.join(list(map(str,A))))
# result = [data*(i+1) for i,data in enumerate(arr) ]

# for idx,data in enumerate(result):
#   if idx == 0:
#     arr[idx] = data
#     continue
#   arr[idx] = data-result[idx-1]
# print(' '.join(list(map(str,arr))))

