import sys
from timeit import default_timer as timer
from datetime import timedelta

start = timer()
def prime_list(n):
  primes = [True] * n
  m = int(n ** 0.5)
  for i in range(2, m + 1):
    if primes[i] == True:
      for j in range(i+i, n, i):
        primes[j] = False
  return primes

# def prime_check(n):
#   check = True
#   m = int(n ** (1/2))
#   for i in range(2, m+1):
#     if n % i == 0:
#       check = False
#       break
#   return check
primes = prime_list(1000001)
while True:
  T = int(sys.stdin.readline())
  for i in range(T-1, 2 , -2):
    if primes[i] and primes[T-i]:
      if T-i >= 3:
        print(f"{T} = {T-i} + {i}")
        break

  if T == 0:
    break
'''
기존 코드와의 가장 큰 차이점은 하나씩 숫자를 받을 때 마다 
반복문을 도는 것이고, 
지금은 일단 범위 내의 소수를 다 찾아놓고 조건을 만족하는 수를 골라내는 식
'''


end = timer()
print(timedelta(seconds=end-start))
