# -*- coding: utf-8 -*-

op = str(input())
mini = 0
maxi = 11
avg = 0.0
acum = 0.0
m = [[0 for x in range(12)] for y in range(12)]
for l in range(len(m)):
    for c in range(len(m[l])):
        n = float(input())
        m[l][c] = n
        if mini < c < maxi:
            acum += n
            if op == 'M':
                avg += 1
    mini += 1
    maxi -= 1
if op == 'S':
    print('{:.1f}' .format(acum))
else:
    print('{:.1f}' .format(acum/avg))
