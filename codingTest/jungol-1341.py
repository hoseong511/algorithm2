while True:
  n,m = map(int,input().split())
  if n< 2 or 9 < n or m < 2 or 9 < m:
    print("INPUT ERROR!")
    continue
  arr = [i for i in range(n,m-1 if n>m else m+1, -1 if n > m else 1)]
  for a in arr:
    for j in range(3):
      [print(f'{a} * {i+1} = {" "+ str(a * (i+1)) if a * (i+1)<=9 else a * (i+1) }',
              end='   ') 
                for i in range(j*3,(j+1)*3)]
      print('')
    print('')
  break