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

primes = prime_list(10001)
for _ in range(int(sys.stdin.readline())):
  T = int(sys.stdin.readline())
  result = {}
  for i in range(T-1, 1 , -1):
    if primes[i] and primes[T-i]:
      if T-i >= 2 and 2*i-T >= 0:
        result[2*i-T] = (T-i, i)
  result = result[min(result)]
  print(result[0], result[1])
      
'''
기존 코드와의 가장 큰 차이점은 하나씩 숫자를 받을 때 마다 
반복문을 도는 것이고, 
지금은 일단 범위 내의 소수를 다 찾아놓고 조건을 만족하는 수를 골라내는 식
'''


end = timer()
print(timedelta(seconds=end-start))
