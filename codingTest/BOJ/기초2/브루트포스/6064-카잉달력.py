import sys
input = sys.stdin.readline
out = sys.stdout.write

T = int(input())
def gcd(n, m):
  if n < m : n, m = m, n
  if m == 0:
     return n
  return m if n % m == 0 else gcd( m , n % m )

#r곱셈에대한 역원구하기 , 나머지가 1인경우를 찾아야한다.
def modinverse(a, m):
  for i in range(1, m):
    if a*i % m == 1:
      return i
j = 0
for _ in range(T):
  M, N, x, y = map(int, input().split())
  k = gcd(N,M)
  if k == 1:
    M_inverse = modinverse(M, N)
    i = N*j + abs(y-x) * M_inverse
    result = M * i + x
    out(str(result)+'\n') 
  else:
    lcd = k * N/k * M/k
    n1, n2 = lcd // M , lcd // N
    m1, m2 = n1 % M, n2 % N
    result = (n1*m1*x + n2*m2*y) % lcd
    if result % M == x and result % N == y:
      out(str(int(result))+'\n')
    else:
      out( str(-1)+'\n' if int(result)!=0 else str(lcd)+'\n')

