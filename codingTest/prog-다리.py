def solution(bridge_length, weight, truck_weights):
    answer = 0
    # 3:08
    #   queue   6,5,4,7-> __ -> 
    # truck_weights.pop(0) -> bridge -> 
    # 대기 트럭 출발 -> 다리(queue) 하중 판단 -> 다리 길이 만큼 반복문(count) -> 다리에서 pop 
    bridge = [] <- 진행중
    
    
    sec = 0
    truck_total = 0
    idx = 0
    # while truck_total <= weight:
    #     truck_weight += truck_weights[idx]
    #     idx += 1
    bridge = []
    # for i in range(bridge_length):
    while True:
        idx = 0
        truck = truck_weights[0]
        bridge.append(truck)
        
        for _ in range(bridge_length):
            if 
    
    for _ in range(idx):
        truck = truck_weights.pop(0)
        bridge.append(truck)
        for _ in range(bridge_length):
            sec += 1
            
    idx = 0
    bridge = []
    # print(truck)
        
    return answer