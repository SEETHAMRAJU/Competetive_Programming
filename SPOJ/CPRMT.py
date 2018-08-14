from sys import *
def solve(x,y):
	a=[0]*26
	b = [0]*26
	c = [0]*26
	for i in x:
		a[ord(i)-ord("a")] += 1
	for j in y:
		b[ord(j)-ord("a")] += 1
	ans = ""
	for i in range(0,26):
		c[i] = min(a[i],b[i])
	for i in range(0,26):
		while(c[i]>0):
			ans += chr(ord("a") + i)
			c[i] -= 1
	print ans

