t = input()
ans = []
while(t > 0):
	x = map(int , raw_input().split())
	y = list(set(x))
	if(x.count(y[0]) == x.count(y[1])):
		ans.append("YES")
	else:
		ans.append("NO")
	t -= 1
for x in ans:
	print x
	 