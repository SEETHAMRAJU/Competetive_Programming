x = raw_input()
if(len(x) <26):
	print "-1"
	exit()
answer = "abcedfghijklmnopqrstuvwxyz"
cur = 97
x = list(x)
i = 0
while(i<len(x) and cur <123):
	if(ord(x[i]) <= cur):
		x[i] = chr(cur)
		cur += 1
	i+=1
if(cur <= 122):
	print "-1"
	exit()
ans = ""
for i in x:
	ans += i
print ans
