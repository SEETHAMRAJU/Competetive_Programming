x = raw_input()
y = raw_input()
if(len(y) != len(x)):
    print "NO"
    exit()
count = 0
p = []
for i in range(0,len(x)):
    if(x[i] != y[i]):
        count += 1
        p.append(i)
    if(count > 2):
        print "NO"
        exit()
        break
if(count %2 == 1):
    print "NO"
    exit()
if(x[p[1]] == y[p[0]] and y[p[1]] == x[p[0]]):
    print "YES"
else:
    print "NO"

