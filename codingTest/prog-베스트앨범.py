def solution(genres, plays):
    answer = []
    # 장르의 총 재생 횟수를 계산할 테이블
    total_table = {}
    for idx,play in enumerate(zip(genres, plays)):
        try:            
            total_table[play[0]] += play[1]
        except:
            total_table[play[0]] = play[1]
# 총합 테이블 완성 및 재생횟수로 정렬
    arr = sorted(total_table.items(), key= lambda x: x[1], reverse = True )

    for genre in arr: 
        a = [(idx,i[1]) for idx,i in enumerate(zip(genres, plays)) if genre[0] == i[0]] # 장르인것을 필터링[(0,100), (1,234), ...]
        a = sorted(a, key= lambda x: x[1], reverse=True) # 재생횟수로 정렬
        try: # 최대 2번 담을 것, 없으면 다음으로 
            for i in range(2):
                answer.append(a[i][0])
        except:
            pass
    
    return answer