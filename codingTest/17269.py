# N, M = map(int, (input().split()))
# A, B = input().split()
# string = ''
# alp = [3, 2, 1, 2, 4, 3, 1, 3, 1, 1, 3, 1, 3, 2, 1, 2, 2, 2, 1, 2, 1, 1, 1, 2, 2, 1]
# for i in range(N if N>M else M):  
#   try:
#     string += A[i]+B[i]
#   except:
#     # string += A[i:] if N>M else B[i:] 내가 했던 방법
#     string += A[i:]+B[i:]
#     break

# lst = [alp[ord(i)-ord('A')] for i in string]
# result = []
# for i in range(N+M-2):
#   for j in range(N+M-1-i):
#     lst[j] += lst[j+1]
# print(f"{lst[0] % 10 * 10 + lst[1] % 10}%")


N, M = map(int, (input().split()))
A, B = input().split()
string = ''
alp = [3, 2, 1, 2, 4, 3, 1, 3, 1, 1, 3, 1, 3, 2, 1, 2, 2, 2, 1, 2, 1, 1, 1, 2, 2, 1]
min_num = min(N,M)
for i in range(min_num):   
    string += A[i]+B[i]  
string += A[min_num:]+B[min_num:]

lst = [alp[ord(i)-ord('A')] for i in string]
result = []
idx = N + M
while True:  
  if len(lst) != 0:
    try:
      result.append((lst[0]+lst[1]))
      lst.pop(0)          
    except:      
      lst.pop(0)
  else:    
    idx -= 1 
    if idx == 2:
      break
    lst, result = result, lst
print(f"{result[0] % 10 * 10 + result[1] % 10}%")