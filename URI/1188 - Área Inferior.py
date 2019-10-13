# -*- coding: utf-8 -*-

op = str(input())
m = [[0 for x in range(12)] for y in range(12)]
minim = 4
maxim = 7
acum = 0.0
avg = 0.0
for l in range(len(m)):
    for c in range(len(m[l])):
        n = float(input())
        m[l][c] = n
        if c > minim  and c < maxim and l > 6:
            acum += n
            if op == 'M':
                avg += 1
    if l > 6:
        minim -= 1
        maxim += 1
if op == 'S':
    print('{:.1f}' .format(acum))
else:
    print('{:.1f}' .format(acum/avg))
