def add(n):
  if n <= 1:
    print(n)
    return 
  else:
    print(n)    
    return add(n-1)
N = int(input())
add(N)