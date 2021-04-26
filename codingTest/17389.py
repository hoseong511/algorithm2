# N = int(input())
# ox_arr = input()
# score = 0
# bonus = 0
# for i in range(N):
#   if ox_arr[i] == 'O':
#     score += i+1 + bonus
#     bonus += 1
#   else:
#     bonus = 0
# print(score)

N, ox_arr = int(input()), input()
score, bonus = 0, 0
for i, ox in enumerate(ox_arr):
  if ox == 'O':
    score,bonus = score + i+1 + bonus, bonus + 1     
  else:
    bonus = 0
print(score)