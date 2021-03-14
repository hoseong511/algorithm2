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

arr =list()
n = int(sys.stdin.readline().rstrip())
for index in range(n):
  cmd = sys.stdin.readline().rstrip()
  try:
    cmd, data = cmd.split()
  except:
    pass
  if cmd =="push":
    arr.append(int(data))
  elif cmd =="pop":
    try:
      data = arr.pop()
      print(data)
    except:
      print(-1)
  elif cmd =="size":
    print(len(arr))
  elif cmd =="empty":
    print(0 if len(arr) !=0 else 1)
  elif cmd == "top":
    print(arr[-1] if len(arr) !=0 else -1)

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

