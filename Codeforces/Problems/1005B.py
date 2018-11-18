x = raw_input()
y = raw_input()
n = len(x)
m = len(y)
i = n-1
j = m-1
while(i>-1 and j>-1):
    if(x[i] != y[j]):
        break;
    i -= 1
    j -= 1
if(i == -1 and j>-1):
    print j+1
elif(j == -1 and i>-1):
    print i+1
elif(i == j and j == -1):
    print "0"
else:
    print i+j+2
