n = input()
x = raw_input()
y = list(x)
y = list(set(y))
i = 0
while(i<n-1):
	if(x[i] !=x[i+1]):
		print "YES"
		print x[i]+x[i+1]
		exit()
	i += 1
print "NO"
