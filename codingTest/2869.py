from math import ceil
A,B,V = map(int,input().split())
print(ceil((V-B) / (A-B)))

'''
속력 = 거리 / 시간
시간 = 거리 / 속력 
걸리는 시간 = 남은 거리 / 올라가는 속도
         = (거리-밤 움직임) / (낮 움직임 - 밤 움직임)/1day
         문제 조건에 의하면 낮 동안 도달하면 끝
         ex 1.xxxx 걸리면 올림하기
'''