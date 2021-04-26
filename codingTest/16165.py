import sys
N,M = map(int, input().split())
teams, mem = {}, {}
for _ in range(N):
  team, n = input(), int(input())
  teams[team] =[]
  for i in range(n):
    name = sys.stdin.readline().rstrip()
    teams[team].append(name)
    mem[name] = team

for _ in range(M):
  q,q_type = input(), int(input())
  if q_type:
    # list_key = list(teams.keys())
    # list_value = list(teams.values())
    # idx =0
    # for i,f in enumerate(list_value):
    #   if q in f:
    #     idx = i
    #     break
    # print(list_key[idx])
    print(mem[q])
  else:
    for member in sorted(teams[q]):
      print(member)