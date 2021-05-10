def solution(dirs):
    answer = 0
    RULD = 'RULD'
    dx, dy = [0,-1,0,1], [1,0,-1,0]
    x, y, count = 0, 0, 0
    table = [[0,0]]
    arr = []
    for char in dirs:
        x += dx[RULD.index(char)]
        y += dy[RULD.index(char)]
        if abs(x) > 5:
            x = (x-1 if x>5 else x+1)
            continue
        if abs(y) > 5:
            y = (y-1 if y>5 else y+1)
            continue
        table.append([x,y])
    for i in range(1,len(table)):
        arr.append(table[i-1]+table[i])
    print(arr)
    for i in range(len(arr)):
        for j in range(1+i,len(arr)):
            if arr[i] == arr[j]:
                count += 1
    return len(arr) -count