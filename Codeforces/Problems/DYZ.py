n,m = map(int,raw_input().split())
x = []
for i in range(0,n):
    y = raw_input()
    temp = list(y)
    x.append(temp)
z = []
for i in range(0,n):
    ans = ""
    for j in range(0,m):
        if(j%2 == 0):
            if(i%2 == 0):
                ans += "W"
            else:
                ans += "B"
        else:
            if(i%2 == 0):
                ans += "B"
            else:
                ans += "W"
    ans = list(ans)
    z.append(ans)

for i in range(0,n):
    for j in range(0,m):
        if(x[i][j] == "."):
            x[i][j] = z[i][j]

for i in range(0,n):
    s = ""
    for j in x[i]:
        s+= j
    print s

