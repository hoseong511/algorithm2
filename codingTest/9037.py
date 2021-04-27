import sys
def candy_toss(student_num, candy_arr, result=0):  
  if candy_arr.count(candy_arr[0]) == student_num:
    return result  
  else:    
    arr = [ int(n/2 + candy_arr[i-1]/2) 
          if i != 0 
          else int(n/2) + int(candy_arr[N-(i+1)]/2) 
          for i,n in enumerate(candy_arr)] # 사탕을 오른쪽으로 전달
    arr = list(map(lambda x : int(x) if int(x) % 2 == 0 else int(x)+1, arr)) # 홀수개인 아이에게 사탕을 하나씩
    result += 1
    result = candy_toss(student_num, arr, result) # result를 전달
    return result
T= int(sys.stdin.readline())
for _ in range(T):
  N, arr = int(sys.stdin.readline()), list(map(lambda x : int(x) if int(x) % 2 == 0 else int(x)+1, sys.stdin.readline().split()))
  a = candy_toss(N, arr)  
  sys.stdout.write(f"{a}\n")
