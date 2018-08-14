x = raw_input()
f = 0
s = 0
for i in x:
    if(i == "7"):
        s+=1
    elif(i == "4"):
        f+=1
if(s>f):
    print "7"
elif(f>s):
    print "4"
elif(s== f and f == 0):
    print "-1"
else:
    print "4"
