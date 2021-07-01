import sys
N = int(sys.stdin.readline())
data = set([sys.stdin.readline().rstrip() for _ in range(N)])
data = sorted(data, key=lambda x: (len(x),x))
[print(i) for i in data]