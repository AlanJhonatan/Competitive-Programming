c = 0
s = ""
c = int(input())

while(c > 0):
	c -= 1
	s = str(input())
	if "Thor" in s:
		print("Y")
	else:
		print("N")