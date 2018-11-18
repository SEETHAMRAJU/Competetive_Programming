s = raw_input()
count = 0
i = 0
j = len(s)-1
while(i!=j and i<j):
    if(s[i] != s[j]):
        count += 1
    i += 1
    j -= 1

if(count%2 == 0):
    print "First"
else:
    print "Second"
