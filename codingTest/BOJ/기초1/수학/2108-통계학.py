import sys
input = sys.stdin.readline
N = int(input())
data = [int(input()) for _ in range(N)]
data = sorted(data)
mean = round(sum(data) / len(data))
median = data[len(data)//2]
range_value = data[-1] - data[0]
table={}
for i in data:
  try:
    table[i] += 1
  except:
    table[i] = 1

sorted_table = sorted(table.items(), key= lambda x: x[1], reverse=True)
print(sorted_table)
if len(sorted_table) ==1 :
  mode = sorted_table[0]
else:
  mode = sorted_table[0] if sorted_table[0][1] != sorted_table[1][1] else sorted_table[1]

print(mean, median, mode[0], range_value, sep='\n')