arr = list(map(int, input().split()))
a = arr.count(arr[0])
b = arr.count(arr[1])
if a == 3:
  print(10000 + 1000 * arr[0])
elif a == 2:
  print(1000 + 100 * arr[0])
elif a == 1:
  if b == 2:
    print(1000 + 100 * arr[1])    
  else:
    c = max(arr)
    print(100 * c)
    