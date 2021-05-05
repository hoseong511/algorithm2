def odd(a, b): # 2 3 4 5 6 7
  if a > b :
    return 
  if a % 2 == 1:
    print(a,end=' ')
  return odd(a+1, b)
a,b = map(int,input().split())
odd(a,b)