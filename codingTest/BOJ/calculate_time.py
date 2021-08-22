cal_time = 0
while True:
  try: data = input()
  except: break
  if ':' in data:
    data = list(map(int,data.split(':')))
    cal_time += data[0]*60 + data[1] 
  
min = cal_time // 60
hour = min // 60
min = min % 60
print(f"{hour}시간 {min}분")
  