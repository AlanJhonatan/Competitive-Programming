# -*- coding: utf-8 -*-
op = str(input())
m = [[0 for x in range(12)] for y in range(12)]
acum = 0
minim = 0
maxim = 11
avg = 0
for l in range(len(m)):
    for c in range(len(m[l])):
        n = float(input())
        m[l][c] = n
        if c < l <= 5 or l + c <= 10 and l > 5:
            acum += n
            if op == 'M':
                avg += 1
if op == 'S':
    print('{:.1f}' .format(acum))
else:
    print('{:.1f}' .format(acum / avg))
