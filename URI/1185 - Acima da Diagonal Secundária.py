# -*- coding: utf-8 -*-
o = str(input())
val = 11
avg = 0
acum = 0.0
mx = [[0.0 for x in range(12)]for y in range(12)]
for l in range(len(mx)):
    for c in range(len(mx[l])):
        n = float(input())
        mx[l][c] = n
        if c < val and o == 'S':
            acum += n
        if c < val and o == 'M':
            acum += n
            avg += 1
    val -= 1
if o == 'S':
    print('{:.1f}' .format(acum))
else:
    print('{:.1f}'.format(acum / avg))
