
t, r = [0,1,3,0], [0,1,2,3]
"""
[0,1,3,0]
[0,3,1,0]
[0,1,2,3]

"""
def solution (t, r):
  arr, reault = [], []
  for time in range(max(t)+1):
    arr += [(ti,peo) for ti, peo in zip(t,r) if time == ti]
    result.append(app.pop(0))
    
