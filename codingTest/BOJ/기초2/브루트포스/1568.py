N = int(input())
idx,sec = 1, 0
while N>0:
  if N < idx:
    idx = 1
  N -= idx
  idx += 1
  sec += 1
  
print(sec)