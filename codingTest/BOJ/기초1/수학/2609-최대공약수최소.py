def gcd(n, m):
  if n < m :
    n, m = m, n
  if m == 0:
    return n
  if n % m == 0:
    return m
  else:
    return gcd( m , n % m )

n,m = map(int, input().split())
a = gcd(n,m)
b = a * n/a * m/a # lcm(n,m) = gcd(n,m) * n/gcd(n,m) * m/gcd(n,m)
print(a)
print(int(b))
# 24 , 18 , 6
# 18 , 6 , 0
# 6 , 0 , 6