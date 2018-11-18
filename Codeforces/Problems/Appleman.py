def update(l,i,j):
    if(i != 0):
            l[i-1][j] += 1
    if(i!=len(l)-1):
            l[i+1][j] += 1
    if(j!=0):
            l[i][j-1] += 1
    if(j!= len(l[0])-1):
            l[i][j+1] += 1
    return l
n = input()
l = []
for i in range(0,n):
    p = raw_input()
    l.append(p)
x = []
for i in range(0,n):
    temp = [0]*n
    x.append(temp)
for i in range(0,n):
    for j in range(0,n):
        if(l[i][j] == "o"):
            update(x,i,j)
for i in range(0,n):
    for j in range(0,n):
        if(x[i][j]%2 == 1 or x[i][j] == 1 ):
            print "NO"
            exit()

print "YES"
