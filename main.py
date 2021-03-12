# import sys
# n, x = map(int,input().split())
# arr = list(map(int,input().split()))
# for i in arr:
#     print( "%d " %i if i < x else "", end="")

import sys
n = int(input())
arr = [sys.stdin.readline() for i in range(n)]
for i in range(n):
    a, b =map(int, arr[i].rstrip().split())
    print("Case #%d: %d" %(i+1, a+b))