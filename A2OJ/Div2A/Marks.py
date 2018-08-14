n,m = map(int,raw_input().split())
x = []
for i in range(0,n):
    y = raw_input()
    temp = []
    for i in y:
        temp.append(int(i))
    x.append(temp)
d = {}
for i in range(0,m):
    d[i] = []
ma = [0]*m
for i in range(0,m):
    maxsofar= -100
    for j in range(0,n):
        maxsofar = max(maxsofar,x[j][i])
        ma[i] = maxsofar

for i in range(0,m):
    for j in range(0,n):
        if(x[j][i] == ma[i]):
            d[i].append(j)

c = [0]*n
for i in range(0,m):
    for l in d[i]:
        c[l] = 1
s = 0
for i in c:
    s += i

print s

