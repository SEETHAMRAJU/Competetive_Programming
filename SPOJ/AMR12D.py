t = input()
answer = []
for i in range(0,t):
	x = raw_input()
	if(x == x[::-1]):
		answer.append(1)
	else:
		answer.append(0)
for i in answer:
	if(i == 1):
		print "YES"
	else:
		print "NO"
