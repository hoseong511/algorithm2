'''
666연속
666, 1666,2666,3666,4666,5666,6660, 6661,6662,6663,...
6664, 6665, 6666, 6667, 6668, 6669, 7666, 8666, 9666
10666, 11666, 12666, 13666, 14
'''
N = int(input())
i,cnt = 0, 0
while True:
  target = str(i)
  if target.count('666') >=1:
    cnt+=1
  if cnt == N:
    print(target)
    break
  i+= 1