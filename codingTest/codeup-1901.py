def add(n):
  if n <= 1:
    print(n)
    return 1
  else:
    a = add(n-1) + 1
    print(a)
    return a
N = int(input())
add(N)