n,m,d = map(int,raw_input().split())
x = []
for i in range(0,n):
    y = map(int,raw_input().split())
    for i in y:
        x.append(i)
x.sort()
req = x[0]%d
for i in x:
    if(req != i%d):
        print "-1"
        exit()
n = len(x)
s = 0
for i in x:
    s += abs(x[n//2]-i)
print s//d




