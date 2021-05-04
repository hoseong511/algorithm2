n,k = map(int,input().split())

memo=[0]*100000001
def sq(n , k):
  if memo[k] == 0:
    if k <= 1:    
      memo[k] = n
    else:
      if k % 2 == 0:
        memo[k] = sq(n, k // 2) * sq(n, k // 2 )
      else:
        memo[k] = sq(n, k // 2) * sq(n, k // 2 + 1)

  return memo[k]

print(sq(n ,k) % 1000000007)