# from functools import reduce
# 고차함수 reduce
def reduce(function, iterable, initializer=None):
    it = iter(iterable)
    if initializer is None:
        value = next(it)
    else:
        value = initializer
    for element in it:
        value = function(value, element)
    return value
print(reduce(lambda x,y: x*y, map(float,(input().split())), 3))
