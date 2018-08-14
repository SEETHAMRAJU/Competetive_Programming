t = input()
ans = []
a = 0
while(a<t):
    x = input()
    l = []
    y = x
    while(y > 0):
        l.append(y%10)
        y = y/10
    print l
    i = 0
    ln = []
    while(i < len(l)):
	#print l[i]
        if(l[i]==0):
            ln.append(l[i])
  	elif(x%l[i] != 0):
	    ln.append(l[i])
	i+=1
    ans.append(len(ln))
    a += 1
for k in ans:
      print k
