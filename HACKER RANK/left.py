def left(n,l):
    l2 = []
    #for i in range(len(l)):
     #   l2.append(0)
    #l2[len(l)-1] = l[0]
    if(n == 1):
            i=1
            while(i < len(l)-1):
                l2.append(l[i])
                i += 1
		print "Hey"+str(l2)
	    l2.append(l[0])
            return l2
    else:
            l = left(1,l)
            n-=1
	    #print l
            return left(n,l)
x,y = map(int,raw_input().split())
l = map(int,raw_input().split())
lnew = left(y,l)
for x in lnew:
    print x,
