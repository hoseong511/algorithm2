import sys
input = sys.stdin.readline
print = sys.stdout.write
N, M = map(int, input().split())
sites = {}
for _ in range(N):
  site, passwd = input().split()
  sites[site] = passwd
for i in range(M):
  site = input().rstrip()
  print(sites[site]+'\n')