n = input()
x = map(int,raw_input().split())
temp = []
for k in x:
    if(k%3 != 0):
        temp.append(k)
temp.sort()
g = []
for j in x:
    if j not in temp:
        g.append(j)
temp.insert(0,temp[0]*3)
g.remove(temp[0])
while(len(temp)!=n):
    if temp[0]/2 in g:
        temp.insert(0,temp[0]/2)
        g.remove(temp[0])
    else:
        if temp[0]*3 in g:
            temp.insert(0,temp[0]*3 )
            g.remove(temp[0])
for i in temp:
    print i,
