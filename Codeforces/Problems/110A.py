def lucky(n):
	if(n == 0):
		return False
	while(n>0):
		if(n%10 == 4 or n%10 == 7):
			n = n//10
		else:
			return False
	return True
x = raw_input()
count = 0
for i in x:
	if(i == "4" or i == "7"):
		count += 1
if(lucky(count)):
	print "YES"
else:
	print "NO"
