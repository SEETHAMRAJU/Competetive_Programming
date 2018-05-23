n,m = map(int,raw_input().split())
x = []
for i in range(0,n):
    y = ""
    if(i%2 == 0):
        for j in range(0,m):
            y = y + "#"
        x.append(y)
    else:
        if(i%4 == 1):
            for j in range(0,m-1):
                y = y + "."
            y = y + "#"
            x.append(y)
        elif(i%4 == 3):
            y = "#"
            for i in range(0,m-1):
                y = y + "."
            x.append(y)
for l in x:
    print l
