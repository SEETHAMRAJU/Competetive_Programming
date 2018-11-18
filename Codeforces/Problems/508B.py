def swap(l,i,j):
    l = list(l)
    temp = l[i]
    l[i] = l[j]
    l[j] = temp
    p = ""
    for k in l:
        p = p + k
    return p
x = raw_input()
flag = int(x[len(x)-1])
minsofar = -1
l = 0
for i in range(0,len(x)-1):
    if(int(x[i])%2 == 0):
        if(l == 0):
            if(int(x[i]) < flag):
                minsofar= i
                break
            else:
                minsofar = i
            l +=1
        #elif(int(x[i]) <= int(x[minsofar])):
        else:
            l+=1
            if(int(x[i]) < flag):
                minsofar = i
                break
            else:
                minsofar = i
    elif(i == len(x)-2 and minsofar == -1):
        print "-1"
        exit()
print swap(x,len(x)-1,minsofar)
