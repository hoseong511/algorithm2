def solution(s):
    answer = []
    result = ''
    for i in s:
        if i in '{}':
            continue
        if i in '0123456789':
            result += i
        if i == ',':
            result += i

    result = map(int,result.split(','))
    table ={}
    for i in result:
        try:
            table[i] += 1
        except:
            table[i] = 1
    answer = [i[0] for i in sorted(table.items(), key= lambda x: x[1], reverse=True)]
    return answer