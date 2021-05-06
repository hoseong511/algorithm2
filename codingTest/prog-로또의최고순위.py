def solution(lottos, win_nums):
    answer = [0]*2
    check = [0]*2
    rank = [6,6,5,4,3,2,1]
    # lottos = [44, 1, 0, 0, 31, 25]
    # win_nums = [31, 10, 45, 1, 6, 19]
    for i in lottos:
        if i == 0:
            check[0] += 1
            continue
        if i in win_nums:
            check[0] += 1
            check[1] += 1
    answer[0] = rank[check[0]]
    answer[1] = rank[check[1]]
             
    return answer