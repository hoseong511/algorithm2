from functools import reduce,cache
print(reduce(lambda x,y: x//y, map(int,input().split())))

@cache # memoizaition
def factorial(n):
    return n * factorial(n-1) if n else 1

print(factorial(10))      # no previously cached result, makes 11 recursive calls
print(factorial(5))       # just looks up cached value result
print(factorial(12))      # makes two new recursive calls, the other 10 are cached

