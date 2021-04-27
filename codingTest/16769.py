bucket,milk = [0,0,0], [0,0,0]

for i in range(3):
  bucket[i], milk[i] = map(int, input().split())

for i in range(100):
  idx = i % 3
  nxt = (idx+1) % 3
  milk[idx], milk[nxt] = max(milk[idx] - (bucket[nxt]- milk[nxt] ),0) ,min(milk[nxt] + milk[idx], bucket[nxt])
  
for i in milk:
  print(i)
