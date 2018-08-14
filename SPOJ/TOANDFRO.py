def solve(n,x):
	p = []
	m = len(x)/n
	j = n
	for i in range(0,m):
		if(i%2 == 1):
			temp = x[j-n:j:]
			temp = temp[::-1]
		else:
			temp = x[j-n:j:]		
		p.append(list(temp))
		j += n
	ans = ""
	#print p
	for i in range(0,n):
		for j in range(0,m):
			ans += p[j][i]
	return ans
			
answer = []
while(1):
	n = input()
	if(n == 0):
		break;	
	x = raw_input()
	answer.append(solve(n,x))
	
for j in answer:
	print j
