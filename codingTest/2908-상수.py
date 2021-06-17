data = input().split()
data = map(lambda x: int(x[::-1]), data)
print(max(data))