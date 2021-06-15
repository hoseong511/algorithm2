doc,word = input(),input()
count = 0
while doc:
  if word == doc[:len(word)]:
    doc = doc[len(word):]
    print(doc)
    count += 1
    continue  
  doc = doc[1:]
print(count)