# -*- coding: utf-8 -*-
op = str(input())
acum = 0.0
avg = 0.0
limit = 11
mx = [[0 for x in range(12)] for y in range(12)]
for i in range(len(mx)):
    for j in range(len(mx[i])):
        n = float(input())
        mx[i][j] = n
        if op == 'S' and j > limit:
            acum += n
        elif op == 'M' and j > limit:
            acum += n
            avg += 1
    limit -= 1
if op == 'S':
    print('{:.1f}' .format(acum))
else:
    print('{:.1f}' .format(acum/avg))
    