n, m = map(int, input().split())

data = [i for i in range(n, m+1)]
for i in data:
  check = True
  if i == 1:
    continue
  tmp = int(i**(1/2))
  for s in range(2,tmp+1):
    if i % s == 0:
      check = False
      break
  if check:
    print(i)

'''
약수의 성질을 이용,
수가 수를 나누기 위해서는 그 몫이 항상 필요하며 나누는
수와 몫 중 어느 하나는 반드시 n^1/2 이하이기 때문..
ex) 40의 약수
1,2,4,5,8,10,20,40
5*8 -> 40의 루트는 6.xxxx 1부터 6까지의 확인하기 
'''