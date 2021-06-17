N, scores = int(input()), list(map(int, input().split()))
max_score = max(scores)
scores = list(map(lambda x: x/max_score*100, scores))
print(sum(scores)/N)