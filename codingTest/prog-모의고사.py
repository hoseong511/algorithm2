from math import ceil

def solution(answers):
    answer = []
    n = len(answers)
    arr = [[1,2,3,4,5], [2,1,2,3,2,4,2,5], [3,3,1,1,2,2,4,4,5,5]]
    
    if n >= 5: # 이부분은 length가 적은 arr[0]을 나눠준 올림 값을 무조건 곱해주기 -> 어차피 정답의 길이가 10000이하니깐..
        num = ceil(n / len(arr[0]))
        arr[0] *= num
        arr[1] *= num
        arr[2] *= num
   
    result = []
    for i in range(3):
        count = 0
        for ans, x in zip(answers,arr[i]): # 정답지의 길이만큼 묶음
            if ans == x:
                count += 1
        result.append((i+1,count))
    max_score = max(result, key= lambda x: x[1])
    answer = [i[0] for i in result if i[1] == max_score[1]]
    
    return answer