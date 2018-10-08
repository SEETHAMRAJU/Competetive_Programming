n,m = map(int,raw_input().split())
d = {}
for i in range(1,n+1):
    d[i] = []
maxsofar = 1
for i in range(1,m+1):
    x,y = map(int,raw_input().split())
    d[x].append(y)
    if(len(d[maxsofar]) < len(d[x])):
        maxsofar = x
flag = True
for i in d[maxsofar]:
    if(len(d[i]) > 2):
        flag = False
ans = []
if(flag == False):
    for i in d[maxsofar]:
        ans.append(i)
    print len(ans)
    for j in ans:
        print j
    exit()
print "1"
print maxsofar

    
    
