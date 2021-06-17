data = list(map(int, input().split()))
data = list(map(lambda x: x*x, data))
print(sum(data)%10)