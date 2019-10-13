while True:
	st = str(input())
	d = int(st[0])
	s = int(st[2:])
	
	if d == 0 and s == 0:
		break

	s = str(s).replace(str(d), '')
	if s == '':
		print('0')
	else:
		print(int(s))
