x = raw_input()
x = list(x)
p = []
for i in x:
	if(i == "("):
		p.append(1)
	else:
		p.append(-1)
print p
for i in range(1,len(p)):
	p[i] = p[i] + p[i-1]
print p
#8 8
#(()(()))

