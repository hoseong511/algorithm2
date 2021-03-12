# import sys
# n, x = map(int,input().split())
# arr = list(map(int,input().split()))
# for i in arr:
#     print( "%d " %i if i < x else "", end="")

# import sys
# n = int(input())
# arr = [sys.stdin.readline() for i in range(n)]
# for i in range(n):
#     a, b =map(int, arr[i].rstrip().split())
#     print("Case #%d: %d" %(i+1, a+b))
# arr = list()
import sys
while(True):
    arr.append(sys.stdin.readline().rstrip())
    if arr[-1] =='':
        arr.pop()
        break
for i in arr:
    a,b = map(int, i.split())
    print(a+b)

# while(True):
#     a,b = map(int, input().spllit())
#     print(a+b)
#     if



# while (True):
#     try:
#         a, b = map(int,sys.stdin.readline().rstrip().split())
#         print(a + b)
#     except:
#         break

