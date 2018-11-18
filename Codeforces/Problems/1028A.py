n,m = map(int,raw_input().split())
p = []
for i in range(0,n):
    x = raw_input()
    x = list(x)
    p.append(x)
l = [0,0,0,0]
for i in range(0,n):
    for j in range(0,m):
        if(p[i][j] == "B"):
            print p[i][j]
            l[0] = i
            l[1] = j
            break;
i = n-1
j = m-1
while(i>=0):
    while(j>=0):
        if(p[i][j] == "B"):
            print p[i][j]
            l[2] = i
            l[3] = j
        j -= 1
    i -= 1
print l
print (l[2] - l[0])//2 +1,
print (l[3] - l[1])//2 +1
