x = input()
y = input()
z = x+y
a = list(str(x))
b = list(str(y))
c = list(str(z))
l = ""
k = ""
m = ""
for i in a:
    if(i == "0"):
        l += ""
    else:
        l += i
for j in b:
    if(j == "0"):
        k += ""
    else:
        k += j

for i in c:
    if(i == "0"):
        m += ""
    else:
        m += i

#print m
#print l
#print 
if(int(m )== (int(l)+ int(k))):
    print "YES"
else:
    print "NO"
