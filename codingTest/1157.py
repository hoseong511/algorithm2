words = sorted(input().upper())
result = []
set_words = sorted(list(set(words)))
for i in set_words:
  count = words.count(i)
  result.append(count)
  words= words[count:]
if result.count(max(result)) > 1 :
  print("?")
else:
  print(set_words[result.index(max(result))])