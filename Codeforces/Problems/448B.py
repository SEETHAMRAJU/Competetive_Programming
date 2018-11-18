x = raw_input()
y = raw_input()
a = [0]*26
b = [0]*26
if(len(y) > len(x)):
    print "need tree"
    exit()
for i in range(0,len(x)):
    a[ord(x[i])-97] += 1
for i in range(0,len(y)):
    b[ord(y[i])-97] += 1
if(len(x) == len(y)):
    for i in range(0,26):
        if(a[i] != b[i]):
            print "need tree"
            exit()
    print "array"
else:
    flag = 1
    for i in range(0,26):
        if(b[i] > a[i]):
            flag = 0
            print "need tree"
            exit()
    if(flag == 1):
        i = 0
        j = 0
        while(i<len(x) and j<len(y)):
            if(x[i] == y[j]):
                j+=1;
            i += 1
        if(j==len(y)):
            print "automaton"
        else:
            print "both"
    else:
        print "need tree"
        exit()



