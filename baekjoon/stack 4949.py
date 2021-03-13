import sys
data = sys.stdin.readline().rstrip()
b_cnt=0
s_cnt=0
for c in data:
  if c =='.':
    break
  if c == '(' :
    b_cnt+=1
  elif c == ')':
    b_cnt-=1
    if b_cnt < 0:
      break
  elif c == '[':
    s_cnt +=1
  elif c == ']':
    s_cnt -=1
    if s_cnt <0:
      break
print("yes" if s_cnt==0 and b_cnt==0 else "no")
