N, L, K = map(int, input().split())
arr = []
for _ in range(N):
  s1, s2 = map(int, input().split())
  if s2 <= L:
    arr.append(140)
  elif s1 <= L:
    arr.append(100)
  else:
    arr.append(0)
arr = sorted(arr, reverse=True)
print(sum(arr[:K]))