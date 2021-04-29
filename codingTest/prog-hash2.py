def cycle(arr, table):
    min_value = len(arr[0])
    lst = [len(i) for i in arr]
    min_count = lst.count(min_value)    
    for min_phone in arr[:min_count]:
        table[min_phone] = 0
    for phone in arr[min_count:]:
        try:
            table[phone[:min_value]] += 1
            return False
        except:
            pass        
    return arr[min_count:]

def solution(phone_book):
    answer = True
    table = {}
    phone_book = sorted(phone_book,key= lambda x: len(x))
    
    while phone_book:
        phone_book = cycle(phone_book, table)    
    
    answer = False if phone_book == False else True
    return answer

phone_book = ["119", "97674223", "1195524421"]
print(solution(phone_book))