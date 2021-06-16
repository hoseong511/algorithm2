'''
(1 ≤ E ≤ 15, 1 ≤ S ≤ 28, 1 ≤ M ≤ 19)
'''
import sys
E,S,M = map(int, sys.stdin.readline().split())
i = 0
e,s,m = 0,0,0
while True:
  i += 1
  if i % 15 == 0: e += 1
  if i % 28 == 0: s += 1
  if i % 19 == 0: m += 1
  a, b, c = 15*e+E, 28*s+S, 19*m+M
  if (a == b == c):
    print(a)
    break
  