for _ in range(int(input())):
  data = list(map(int,input().split()))
  N = data[0]
  scores = data[1:]
  avg = sum(scores)/N
  target = len(list(filter(lambda x: x > avg, scores)))
  print("%.3f%%" %round(target/N*100,3))