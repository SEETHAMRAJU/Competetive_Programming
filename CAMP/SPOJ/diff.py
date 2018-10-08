x = raw_input()
y = raw_input()
x = x+".txt"
y = y+".txt"
p = open(x,"r")
q = open(y,"r")
n = p.readlines()
m = q.readlines()
i = 0
while(i<len(n)):
    if(n[i] != m[i]):
        print n[i],m[i]
        print "Not Matching",
        print i
        exit()
    i += 1
print "Matching"
