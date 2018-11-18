n,m = map(int,raw_input().split())
x = []

for i in range(0,n):
    y = raw_input()
    x.append(y)
v = [0]*m
h = [2]*n
for i in range(0,n):
    for j in range(0,m):
        if(x[i][j] == "S"):
            h[i] = 1
            v[j] = 1
req = 0
for i in range(0,n):
    for j in range(0,m):
        if(h[i] == v[j]):
            req += 1
print n*m - req
