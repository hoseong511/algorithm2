'''

192, 72 , 48 -> n = 192 , m = 72
72, 48, 24 -> n = 72(=m) , m = 48(= n%m)
48, 24, 0
'''

def gcd(n,m):
  if n < m :
    n,m = m,n
  if m == 0:
    return n
  return m if n % m ==0 else gcd(m, n%m)
    
for _ in range( int(input())):
  n, m = map(int, input().split())
  a = gcd(n,m)
  result = a * n/a * m/a
  print(int(result))
