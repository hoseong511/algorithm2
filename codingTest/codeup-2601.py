n = int(input())
# 1 1 2 3 5 8 13
table=[0]*41
def fibo(n):
  if table[n] == 0:
    if n <= 2:    
      table[n] = 1
    else:
      table[n] = fibo(n-1) + fibo(n-2)
  return table[n]

print(fibo(n))