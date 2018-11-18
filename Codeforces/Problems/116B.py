def check(x,n,m,i,j):
    if(i == 0 or j == 0 or i == n-1 or j == m-1):
        if(i==0 and j == 0):
            if(x[i][j+1] == "P" or x[i+1][j] == "P"):
                return 1
        elif(i == n-1 and j == m-1):
            if(x[i-1][j] == "P" or x[i][j-1] == "P"):
                return 1
        elif(i == 0 and j == m-1):
            if(x[i][j-1] == "P" or x[i+1][j] == "P"):
                return 1
        elif(i == n-1 and j == 0):
            if(x[i-1][j] == "P" or x[i][j+1] =="P"):
                return 1
        elif(j == 0 or j == m-1 and i >0 and i<n-1):
            if(j == m-1):
                if(x[i-1][j] == "P" or x[i+1][j] == "P" or x[i][j-1] == "P"):
                    return 1
            elif(j == 0 ):
                if(x[i-1][j] == "P" or x[i+1][j] == "P" or x[i][j+1] == "P"):
                    return 1
        elif(i == 0 or i == n-1 and j>0 and j<m-1):
            if(i == n-1):
                if(x[i][j-1] == "P" or x[i][j+1] == "P" or x[i-1][j] == "P"):
                    return 1
            elif(i == 0):
                if(x[i][j-1] == "P" or x[i][j+1] == "P" or x[i+1][j] == "P"):
                    return 1
    else:
        if(x[i-1][j] == "P" or x[i][j-1] == "P" or x[i+1][j] == "P" or x[i][j+1] == "P"):
            return 1
    return 0
n,m = map(int,raw_input().split())
x = []
for i in range(0,n):
    y = raw_input()
    x.append(y)
count = 0
if(n == 1 and m == 1):
        print "0"
        exit()
if(n == 1 and m!=1):
    count = 0
    if(x[0][0] == "W" and x[0][1] == "P"):
        count+=1
    if(x[0][m-1] == "W" and x[0][m-2] == "P"):
        count+=1
    for i in range(1,m-1):
        if( (x[0][i-1] == "P" or x[0][i+1] == "P" )and (x[0][i] == "W")):
            count+=1

    print count
    exit()
for i in range(0,n):
    for j in range(0,m):
        if(x[i][j] == "W"):
            temp = check(x,n,m,i,j)
            if(temp == 1):
                count+=1
print count
