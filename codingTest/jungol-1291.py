while True:
  n,m = map(int,input().split())
  if n< 2 or 9 < n or m < 2 or 9 < m:
    print("INPUT ERROR!")
    continue
  arr = [i for i in range(n,m-1 if n>m else m+1, -1 if n > m else 1)]

  for j in range(9):
    [print(f'{i} * {j+1} = {" "+ str(i * (j+1)) if i * (j+1)<=9 else i * (j+1) }',
             end='   ') 
              for i in arr]
    print('')
  break