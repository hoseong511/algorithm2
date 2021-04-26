N, arr = int(input()), list(map(int, input().split()))
M, m_arr = int(input()), list(map(int, input().split()))
arr = {a:1 for a in arr} # 그러면 딕셔너리 밖에 없는 거 같은데?

for m in m_arr:
  try:
    print(arr[m])
  except:
    print(0)

