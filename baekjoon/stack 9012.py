import sys
n = int(sys.stdin.readline().rstrip())
for _ in range(n):
    a = sys.stdin.readline().rstrip()
    arr = list()
    for i in a:
        if i == '(':
            arr.append(i)
        else:
            try:
                arr.pop()
            except:
                arr.append(')')
                break
    print("YES" if len(arr)==0 else "NO")