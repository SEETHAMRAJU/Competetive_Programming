l = raw_input()
h = [0]*26
for i in l:
    h[ord(i)-97]+= 1
o = 0
for i in h:
    if(i%2 != 0):
        o+=1
if(o!=0 and o%2 == 0):
    print "Second"
else:
    print "First"
