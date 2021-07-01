N = int(input())
arr,ans,i = [1,2], 0, 2
if N == 1:
  print(1)
  exit(0)

while True:
  arr.append(6*(i-1) + arr[i-1])
  if arr[i] <= N:
    i += 1
    continue
  ans = i
  break
print(ans)