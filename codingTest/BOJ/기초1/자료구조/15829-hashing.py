L = int(input())
string = input()

alpha = '0abcdefghijklmnopqrstuvwxyz'
r, M, H= 31, 1234567891, 0
table = {}
for idx, char in enumerate(string):
  H += alpha.index(char)*(r**idx)
table[string] = H % M
print(table[string])

'''md
$$H = \sum_{i=0}^{l-1} a_i r^i  mod M$$

$$\displaystyle\sum_{i=0}^{l-1} a_i r^i  mod M$$
'''