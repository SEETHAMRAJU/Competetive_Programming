n,k = map(int,raw_input().split())
x = map(int,raw_input().split())
p = []
d = {}
for i in range(0,2001):
    d[i] = 3000
for i in range(0,n):
    p.append(x[i])
    d[x[i]] = min(i,d[x[i]])
p.sort()
p = p[::-1]
req = []
tot = 0
for i in range(0,k):
    tot += p[i]
    req.append(d[p[i]])
req.sort()
print tot
print req[0]+1,
for i in range(1,k):
    print req[i] - req[i-1] +1,

