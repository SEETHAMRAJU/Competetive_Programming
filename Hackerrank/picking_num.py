def absolute(x):
    if(x < 0):
        return -x
    else:
        return x
x= input()
c = map(int ,raw_input().split())
c.sort()
#while(i < ((x)*(x-1))/2):
#    j = 0
count = []
j = 0
while(j < x-1):
    k = j+1
    while(k < x):
        #print str(c[j]) + " and "+str(c[k])+" and also the iteration is j"+str(j)+" k = "+str(k)
        if(absolute((c[j] - c[k])) <= 1):
            count.append(c[j])
            count.append(c[k])           
        k+=1
    j+=1
count = set(count)
print len(count)