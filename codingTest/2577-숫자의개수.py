'''
곱한 값에 들어있는
0~9 숫자의 개수
'''
A, B, C = int(input()), int(input()), int(input())
mul = str(A * B * C)
for i in range(10):
  print(mul.count(str(i)))
